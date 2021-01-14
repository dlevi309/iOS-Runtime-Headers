/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSyncBaseItem.h>

@class NSUUID, NSDate, NSString;

@interface MapsSyncFakeBaseItem : NSObject <MapsSyncBaseItem> {

	NSDate* _createTime;
	NSUUID* _identifier;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * createTime;              //@synthesize createTime=_createTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)createTime;
-(id)initWithIdentifier:(id)arg1 createTime:(id)arg2 ;
-(NSUUID *)identifier;
@end

