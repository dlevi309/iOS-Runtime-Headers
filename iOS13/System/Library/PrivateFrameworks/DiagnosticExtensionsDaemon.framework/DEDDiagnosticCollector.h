/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)extensionManager;
-(NSArray *)cachedExtensions;
-(void)setCachedExtensions:(NSArray *)arg1 ;
-(id)availableDiagnosticExtensions;
-(id)collectItemsWithIdentifier:(id)arg1 parameters:(id)arg2 ;
-(id)extensionForIdentifier:(id)arg1 ;
-(void)setCollectionTimeout:(unsigned long long)arg1 ;
-(unsigned long long)collectionTimeout;
-(BOOL)isDiagnosticExtensionAvailable;
@end

