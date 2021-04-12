/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)userID;
-(void)setUserID:(unsigned long long)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setSubscribed:(BOOL)arg1 ;
-(BOOL)isSubscribed;
@end

