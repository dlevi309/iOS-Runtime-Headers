/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/NSFileProviderEnumerator.h>

@class NSFileProviderDomain, NSString;

@interface FPMaterializedSetEnumerator : NSObject <NSFileProviderEnumerator> {

	NSFileProviderDomain* _domain;
	NSString* _provider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id)initWithDomain:(id)arg1 ;
-(void)currentSyncAnchorWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2 ;
-(void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2 ;
-(id)initWithDomain:(id)arg1 provider:(id)arg2 ;
@end

