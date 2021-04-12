/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSString;

@interface IKUser : NSObject {

	unsigned long long _userID;
	NSString* _username;
	BOOL _subscribed;

}

@property (assign,nonatomic) unsigned long long userID;                        //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * username;                                //@synthesize username=_username - In the implementation block
@property (assign,getter=isSubscribed,nonatomic) BOOL subscribed;              //@synthesize subscribed=_subscribed - In the implementation block
-(void)setUserID:(unsigned long long)arg1 ;
-(unsigned long long)userID;
-(void)setUsername:(NSString *)arg1 ;
-(id)init;
-(NSString *)username;
-(id)description;
-(void)setSubscribed:(BOOL)arg1 ;
-(BOOL)isSubscribed;
-(void)dealloc;
@end

