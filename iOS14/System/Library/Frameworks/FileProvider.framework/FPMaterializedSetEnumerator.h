/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDomain:(id)arg1 ;
-(void)currentSyncAnchorWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enumerateChangesForObserver:(id)arg1 fromSyncAnchor:(id)arg2 ;
-(void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2 ;
-(void)invalidate;
-(id)initWithDomain:(id)arg1 provider:(id)arg2 ;
@end

