/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isInvalidated;
-(id)init;
-(void)_fixupFavoriteRank:(id)arg1 ;
-(id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 ;
-(id)updateForProviderItem:(id)arg1 ;
-(void)verifyVendorToken:(id)arg1 ;
-(void)invalidate;
@end

