/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol OS_dispatch_queue;
@class FPItemID, FPXDomainContext, NSObject, NSFileProviderExtension, FPXExtensionContext;

@interface FPXObserver : NSObject {

	FPItemID* _observedItemID;
	FPXDomainContext* _domainContext;
	NSObject*<OS_dispatch_queue> _queue;
	NSFileProviderExtension* _strongVendorInstance;
	FPXExtensionContext* _strongExtensionContext;
	BOOL _invalidated;

}

@property (getter=isInvalidated,readonly) BOOL invalidated;              //@synthesize invalidated=_invalidated - In the implementation block
-(id)init;
-(void)invalidate;
-(BOOL)isInvalidated;
-(void)_fixupFavoriteRank:(id)arg1 ;
-(id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 ;
-(id)updateForProviderItem:(id)arg1 ;
-(void)verifyVendorToken:(id)arg1 ;
@end

