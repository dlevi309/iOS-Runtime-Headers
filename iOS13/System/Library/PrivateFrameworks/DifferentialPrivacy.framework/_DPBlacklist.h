/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@class NSSet, NSString;

@interface _DPBlacklist : NSObject {

	NSSet* _blacklist;
	long long _version;
	NSString* _key;

}

@property (nonatomic,copy,readonly) NSString * key;              //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSSet * blacklist;                //@synthesize blacklist=_blacklist - In the implementation block
@property (nonatomic,readonly) long long version;                //@synthesize version=_version - In the implementation block
+(void)initialize;
+(void)resetAllBlacklists;
+(id)extractKeyFromFileName:(id)arg1 ;
+(id)blacklistForKey:(id)arg1 fromConfigurationsFile:(id)arg2 ;
+(BOOL)blacklistExistsWithKey:(id)arg1 inDirectory:(id)arg2 ;
+(id)filePathWithKey:(id)arg1 inDirectory:(id)arg2 ;
+(id)blacklistForKey:(id)arg1 systemBlacklistDirectory:(id)arg2 runtimeBlacklistDirectory:(id)arg3 ;
+(void)removeBlackListForKey:(id)arg1 ;
-(id)init;
-(NSString *)key;
-(long long)version;
-(NSSet *)blacklist;
-(id)initWithKey:(id)arg1 fromConfigurationsFile:(id)arg2 ;
@end

