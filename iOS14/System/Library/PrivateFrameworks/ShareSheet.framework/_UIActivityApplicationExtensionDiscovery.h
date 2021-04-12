/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/


@class NSArray;

@interface _UIActivityApplicationExtensionDiscovery : NSObject {

	NSArray* _extensionPointIdentifiers;
	/*^block*/id _fetchShortcutsBlock;

}

@property (nonatomic,copy) NSArray * extensionPointIdentifiers;              //@synthesize extensionPointIdentifiers=_extensionPointIdentifiers - In the implementation block
@property (nonatomic,copy) id fetchShortcutsBlock;                           //@synthesize fetchShortcutsBlock=_fetchShortcutsBlock - In the implementation block
+(id)extensionMatchingDictionariesForExtensionItems:(id)arg1 ;
+(id)extensionBasedActivityForExtension:(id)arg1 ;
-(void)setExtensionPointIdentifiers:(NSArray *)arg1 ;
-(id)init;
-(void)primeWithDiscoveryContext:(id)arg1 ;
-(NSArray *)extensionPointIdentifiers;
-(void)registerPendingContinuousExtensionsDiscovery;
-(void)setFetchShortcutsBlock:(id)arg1 ;
-(id)reportExtensionsCacheResult;
-(id)fetchShortcutsBlock;
-(id)initWithExtensionPointIdentifiers:(id)arg1 ;
-(void)dealloc;
-(id)activitiesForMatchingContext:(id)arg1 error:(id*)arg2 ;
@end

