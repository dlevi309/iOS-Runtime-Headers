/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPPackageReadCoordinator.h>

@protocol OS_dispatch_queue;
@class TSPPackage, NSObject;

@interface TSPSupportPackageReadCoordinator : TSPPackageReadCoordinator {

	TSPPackage* _documentPackage;
	NSObject*<OS_dispatch_queue> _documentComponentReadQueue;

}
-(id)initWithContext:(id)arg1 package:(id)arg2 packageURL:(id)arg3 finalizeHandlerQueue:(id)arg4 areExternalDataReferencesAllowed:(BOOL)arg5 skipDocumentUpgrade:(BOOL)arg6 archiveValidationMode:(long long)arg7 ;
-(id)initWithContext:(id)arg1 package:(id)arg2 packageURL:(id)arg3 finalizeHandlerQueue:(id)arg4 areExternalDataReferencesAllowed:(BOOL)arg5 skipDocumentUpgrade:(BOOL)arg6 archiveValidationMode:(long long)arg7 documentPackage:(id)arg8 ;
-(BOOL)endReading;
-(long long)metadataObjectIdentifier;
-(void)prepareToReadComponentWithIdentifier:(long long)arg1 forObjectIdentifier:(long long)arg2 isWeakReference:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

