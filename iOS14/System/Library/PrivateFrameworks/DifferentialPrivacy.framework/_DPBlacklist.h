/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)removeBlackListsForKeys:(id)arg1 ;
+(id)blacklistForKey:(id)arg1 systemBlacklistDirectory:(id)arg2 runtimeBlacklistDirectory:(id)arg3 ;
+(void)removeBlackListForKey:(id)arg1 ;
-(id)init;
-(NSString *)key;
-(NSSet *)blacklist;
-(long long)version;
-(id)initWithKey:(id)arg1 fromConfigurationsFile:(id)arg2 ;
@end

