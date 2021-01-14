/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@class NSObject, NSString;

@interface ANDefaultsItem : NSObject {

	NSObject* _defaultValue;
	NSString* _userInfo;

}

@property (nonatomic,retain) NSObject * defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,retain) NSString * userInfo;                  //@synthesize userInfo=_userInfo - In the implementation block
+(id)itemWithValue:(id)arg1 userInfo:(id)arg2 ;
-(void)setUserInfo:(NSString *)arg1 ;
-(void)setDefaultValue:(NSObject *)arg1 ;
-(NSString *)userInfo;
-(NSObject *)defaultValue;
@end

