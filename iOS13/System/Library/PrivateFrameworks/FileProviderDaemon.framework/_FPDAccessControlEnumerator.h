/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/FPXEnumerator.h>

@class NSNumber, FPDAccessControlServicer, NSString;

@interface _FPDAccessControlEnumerator : NSObject <FPXEnumerator> {

	NSNumber* _bundleKey;
	FPDAccessControlServicer* _servicer;
	NSNumber* _limit;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)currentSyncAnchorWithCompletion:(/*^block*/id)arg1 ;
-(void)enumerateItemsFromPage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)enumerateChangesFromToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)keepAliveConnectionForRegisteredObserver:(/*^block*/id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 servicer:(id)arg2 ;
-(id)fetchOnDB:(id)arg1 withOffset:(unsigned long long)arg2 ;
-(void)enumeratorBecameFrontmost:(BOOL)arg1 inWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

