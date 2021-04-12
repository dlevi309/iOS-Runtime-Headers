/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/


@class NSUserActivity, NSString;

@interface CLKUserActivity : NSObject {

	NSUserActivity* _userActivity;
	NSString* _encodedUserActivity;

}

@property (nonatomic,readonly) NSUserActivity * userActivity; 
@property (nonatomic,readonly) NSString * encodedUserActivity; 
-(NSUserActivity *)userActivity;
-(id)initWithUserActivity:(id)arg1 ;
-(id)initWithEncodedUserActivity:(id)arg1 ;
-(NSString *)encodedUserActivity;
@end

