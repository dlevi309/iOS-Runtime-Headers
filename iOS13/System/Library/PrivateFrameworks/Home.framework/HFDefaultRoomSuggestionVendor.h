/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFRoomSuggestionVendor.h>

@class NSSet, NSURL, NSString;

@interface HFDefaultRoomSuggestionVendor : NSObject <HFRoomSuggestionVendor> {

	NSSet* _roomSuggestions;
	NSURL* _roomSuggestionsPlistURL;

}

@property (nonatomic,readonly) NSURL * roomSuggestionsPlistURL;              //@synthesize roomSuggestionsPlistURL=_roomSuggestionsPlistURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSSet * roomSuggestions;                 //@synthesize roomSuggestions=_roomSuggestions - In the implementation block
+(id)TVAccessorySuggestionVendor;
+(id)homeAppSuggestionVendor;
-(id)init;
-(id)initWithRoomSuggestionsPlistURL:(id)arg1 ;
-(NSSet *)roomSuggestions;
-(NSURL *)roomSuggestionsPlistURL;
-(id)prioritizedRoomSuggestions;
@end

