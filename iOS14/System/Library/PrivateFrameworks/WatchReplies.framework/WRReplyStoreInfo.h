/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchReplies.framework/WatchReplies
*/


@class NSString, NSArray;

@interface WRReplyStoreInfo : NSObject {

	BOOL _supportsSmartReplies;
	unsigned long long _defaultCount;
	NSString* _defaultsDomain;
	NSString* _defaultsKey;
	NSString* _defaultsChangedNotificationName;
	NSArray* _hiddenTinkerReplyKeys;

}

@property (nonatomic,readonly) unsigned long long defaultCount;                         //@synthesize defaultCount=_defaultCount - In the implementation block
@property (nonatomic,readonly) NSString * defaultsDomain;                               //@synthesize defaultsDomain=_defaultsDomain - In the implementation block
@property (nonatomic,readonly) NSString * defaultsKey;                                  //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,readonly) NSString * defaultsChangedNotificationName;              //@synthesize defaultsChangedNotificationName=_defaultsChangedNotificationName - In the implementation block
@property (nonatomic,readonly) BOOL supportsSmartReplies;                               //@synthesize supportsSmartReplies=_supportsSmartReplies - In the implementation block
@property (nonatomic,readonly) NSArray * hiddenTinkerReplyKeys;                         //@synthesize hiddenTinkerReplyKeys=_hiddenTinkerReplyKeys - In the implementation block
+(id)infoForCategory:(unsigned long long)arg1 ;
-(NSString *)defaultsDomain;
-(NSString *)defaultsKey;
-(NSString *)defaultsChangedNotificationName;
-(BOOL)supportsSmartReplies;
-(NSArray *)hiddenTinkerReplyKeys;
-(unsigned long long)defaultCount;
@end

