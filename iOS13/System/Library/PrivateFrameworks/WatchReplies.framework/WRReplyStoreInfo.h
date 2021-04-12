/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchReplies.framework/WatchReplies
*/


@class NSString;

@interface WRReplyStoreInfo : NSObject {

	BOOL _supportsSmartReplies;
	unsigned long long _defaultCount;
	NSString* _defaultsDomain;
	NSString* _defaultsKey;
	NSString* _defaultsChangedNotificationName;

}

@property (nonatomic,readonly) unsigned long long defaultCount;                         //@synthesize defaultCount=_defaultCount - In the implementation block
@property (nonatomic,readonly) NSString * defaultsDomain;                               //@synthesize defaultsDomain=_defaultsDomain - In the implementation block
@property (nonatomic,readonly) NSString * defaultsKey;                                  //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,readonly) NSString * defaultsChangedNotificationName;              //@synthesize defaultsChangedNotificationName=_defaultsChangedNotificationName - In the implementation block
@property (nonatomic,readonly) BOOL supportsSmartReplies;                               //@synthesize supportsSmartReplies=_supportsSmartReplies - In the implementation block
+(id)infoForCategory:(unsigned long long)arg1 ;
-(NSString *)defaultsKey;
-(NSString *)defaultsDomain;
-(NSString *)defaultsChangedNotificationName;
-(BOOL)supportsSmartReplies;
-(unsigned long long)defaultCount;
@end

