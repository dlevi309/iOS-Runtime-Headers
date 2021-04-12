/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWSession.h>
@class NSString;


@protocol SWSession <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@required
-(NSString *)identifier;

@end


@class NSString;

@interface SWSession : NSObject <SWSession> {

	NSString* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)identifier;
@end

