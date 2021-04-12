/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol _MXExtensionLookupPolicy, _MXExtensionManagerDelegate;
@class _MXExtensionProvider;

@interface _MXExtensionManager : NSObject {

	id<_MXExtensionLookupPolicy> _lookupPolicy;
	id _matchingContext;
	id<_MXExtensionManagerDelegate> _delegate;
	_MXExtensionProvider* _extensionProvider;

}

@property (nonatomic,retain) id matchingContext;                                           //@synthesize matchingContext=_matchingContext - In the implementation block
@property (assign,nonatomic,__weak) id<_MXExtensionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _MXExtensionProvider * extensionProvider;                     //@synthesize extensionProvider=_extensionProvider - In the implementation block
@property (nonatomic,readonly) id<_MXExtensionLookupPolicy> lookupPolicy;                  //@synthesize lookupPolicy=_lookupPolicy - In the implementation block
+(id)_queue;
+(id)_maps_ridesharingOptionalIntentClassesForNonUIHandling;
+(id)_maps_ridesharingRequiredIntentClassesForNonUIHandling;
+(id)_lookupPolicyWithBlock:(/*^block*/id)arg1 ;
+(id)_maps_ridesharingAllIntentClassesForNonUIHandling;
+(id)_maps_ridesharingIntentClassesForUIInteraction;
+(id)_maps_lookupPolicyForEnabledRidesharingNonUIExtensions;
+(id)_maps_lookupPolicyForRidesharingNonUIExtensions;
+(void)_maps_updateRideBookingExtensions:(id)arg1 ;
+(id)restaurantQueueingIntentClassNames;
+(id)_lookupPolicyForExtensionWithContainingAppIdentifier:(id)arg1 supportsIntentClassNames:(id)arg2 ;
+(id)_lookupPolicyForExtensionSupportsIntentClassNames:(id)arg1 ;
+(id)lookupPolicyForRestaurantQueueingExtensionWithContainingAppIdentifier:(id)arg1 ;
+(id)lookupPolicyForRestaurantQueueingExtensions;
+(id)restaurantReservationIntentClassNames;
+(id)lookupPolicyForRestaurantReservationExtensionWithContainingAppIdentifier:(id)arg1 ;
+(id)lookupPolicyForRestaurantReservationExtensions;
+(void)imageForKey:(id)arg1 extension:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_lookupPolicyWithExtensionPointNames:(id)arg1 ;
+(id)managerWithLookupPolicy:(id)arg1 delegate:(id)arg2 ;
+(id)managerWithExtensionLookupPolicy:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
+(id)_extensionsWithLookupPolicy:(id)arg1 ;
+(id)_lookupPolicyForUIExtension;
+(id)_lookupPolicyForNonUIExtension;
+(id)_lookupPolicyForAllExtensions;
+(id)_lookupPolicyForIntentsExtensions;
+(id)lookupPolicyForExtensionWithCapability:(id)arg1 ;
+(id)lookupPolicyForExtensionWithCapabilities:(id)arg1 ;
+(id)_lookupPolicyForExtensionWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(id<_MXExtensionManagerDelegate>)delegate;
-(void)setDelegate:(id<_MXExtensionManagerDelegate>)arg1 ;
-(_MXExtensionProvider *)extensionProvider;
-(id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2 ;
-(id)_applyExtensionPredicateWithExtensionsIfNeeded:(id)arg1 ;
-(void)setMatchingContext:(id)arg1 ;
-(id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2 extensionProvider:(id)arg3 ;
-(id<_MXExtensionLookupPolicy>)lookupPolicy;
-(id)matchingContext;
-(void)setExtensionProvider:(_MXExtensionProvider *)arg1 ;
@end

