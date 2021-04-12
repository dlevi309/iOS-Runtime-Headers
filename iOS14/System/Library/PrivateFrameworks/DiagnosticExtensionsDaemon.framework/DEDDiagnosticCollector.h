/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/


@protocol OS_os_log;
@class NSObject, NSArray;

@interface DEDDiagnosticCollector : NSObject {

	unsigned long long _collectionTimeout;
	NSObject*<OS_os_log> _log;
	NSArray* _cachedExtensions;

}

@property (retain) NSObject*<OS_os_log> log;                          //@synthesize log=_log - In the implementation block
@property (retain) NSArray * cachedExtensions;                        //@synthesize cachedExtensions=_cachedExtensions - In the implementation block
@property (assign) unsigned long long collectionTimeout;              //@synthesize collectionTimeout=_collectionTimeout - In the implementation block
-(id)extensionManager;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)extensionForIdentifier:(id)arg1 ;
-(id)availableDiagnosticExtensions;
-(NSArray *)cachedExtensions;
-(void)setCachedExtensions:(NSArray *)arg1 ;
-(void)prepareItemsWithDeferredExtensionInfo:(id)arg1 ;
-(void)cleanupItemsWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3 ;
-(void)prepareItemsWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3 ;
-(id)collectItemsWithIdentifier:(id)arg1 parameters:(id)arg2 ;
-(void)setCollectionTimeout:(unsigned long long)arg1 ;
-(unsigned long long)collectionTimeout;
-(BOOL)isDiagnosticExtensionAvailable;
@end

