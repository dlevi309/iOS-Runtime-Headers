/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


#import <iTunesStore/iTunesStore-Structs.h>
@class NSDictionary;

@interface ISUserNotification : NSObject {

	long long _allowedRetryCount;
	long long _currentRetryCount;
	NSDictionary* _dictionary;
	unsigned long long _optionFlags;
	NSDictionary* _userInfo;

}

@property (readonly) NSDictionary * dictionary; 
@property (readonly) unsigned long long optionFlags; 
@property (assign) long long allowedRetryCount;                   //@synthesize allowedRetryCount=_allowedRetryCount - In the implementation block
@property (assign) long long currentRetryCount;                   //@synthesize currentRetryCount=_currentRetryCount - In the implementation block
@property (retain) NSDictionary * userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
-(id)init;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(NSDictionary *)dictionary;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setAllowedRetryCount:(long long)arg1 ;
-(long long)allowedRetryCount;
-(unsigned long long)optionFlags;
-(CFUserNotificationRef)copyUserNotification;
-(long long)currentRetryCount;
-(void)setCurrentRetryCount:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2 ;
@end

