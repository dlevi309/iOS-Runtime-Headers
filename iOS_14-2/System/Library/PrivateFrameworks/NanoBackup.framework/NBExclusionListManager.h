/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoBackup.framework/NanoBackup
*/


@class NSSet, NSMutableDictionary;

@interface NBExclusionListManager : NSObject {

	BOOL _hasReadConfiguration;
	NSSet* _excludedPerGizmoDomains;
	NSMutableDictionary* _excludedPerGizmoDomainSettings;

}

@property (assign,nonatomic) BOOL hasReadConfiguration;                                         //@synthesize hasReadConfiguration=_hasReadConfiguration - In the implementation block
@property (nonatomic,retain) NSSet * excludedPerGizmoDomains;                                   //@synthesize excludedPerGizmoDomains=_excludedPerGizmoDomains - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * excludedPerGizmoDomainSettings;              //@synthesize excludedPerGizmoDomainSettings=_excludedPerGizmoDomainSettings - In the implementation block
-(void)purgeCache;
-(void)readConfigurationIfNeeded;
-(NSSet *)excludedPerGizmoDomains;
-(id)excludedKeysInDomain:(id)arg1 ;
-(BOOL)hasReadConfiguration;
-(void)setHasReadConfiguration:(BOOL)arg1 ;
-(void)setExcludedPerGizmoDomains:(NSSet *)arg1 ;
-(NSMutableDictionary *)excludedPerGizmoDomainSettings;
-(void)setExcludedPerGizmoDomainSettings:(NSMutableDictionary *)arg1 ;
@end

