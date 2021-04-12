/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSItem, NSMutableDictionary, NSString, NSArray, NSSet, SSItemMedia, SSDialog, SSNetworkConstraints;

@interface SSItemOffer : NSObject <NSCopying> {

	SSItem* _item;
	NSMutableDictionary* _offerDictionary;
	NSString* _offerIdentifier;
	NSArray* _supportedDevices;

}

@property (assign,setter=_setOfferItem:,getter=_offerItem,nonatomic) SSItem * _offerItem;              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSSet * accountIdentifiers; 
@property (nonatomic,readonly) NSString * actionType; 
@property (nonatomic,readonly) long long estimatedDiskSpaceNeeded; 
@property (nonatomic,readonly) id requiredSoftwareCapabilities; 
@property (nonatomic,readonly) BOOL shouldShowPlusIcon; 
@property (nonatomic,readonly) NSString * offerIdentifier;                                             //@synthesize offerIdentifier=_offerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * buyParameters; 
@property (nonatomic,readonly) NSString * priceDisplay; 
@property (nonatomic,readonly) NSString * actionDisplayName; 
@property (getter=isOneTapOffer,nonatomic,readonly) BOOL oneTapOffer; 
@property (getter=isPreorder,nonatomic,readonly) BOOL preorder; 
@property (nonatomic,readonly) SSItemMedia * offerMedia; 
@property (nonatomic,readonly) SSDialog * confirmationDialog; 
@property (nonatomic,readonly) SSDialog * successDialog; 
@property (nonatomic,readonly) NSArray * supportedDevices; 
@property (nonatomic,readonly) SSNetworkConstraints * networkConstraints; 
+(id)_preferredOfferIdentifiers;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(NSString *)actionType;
-(NSString *)offerIdentifier;
-(BOOL)isPreorder;
-(NSString *)buyParameters;
-(void)setBuyParameters:(NSString *)arg1 ;
-(SSNetworkConstraints *)networkConstraints;
-(id)playableMedia;
-(id)allowedToneStyles;
-(void)_setOfferItem:(id)arg1 ;
-(NSString *)priceDisplay;
-(id)initWithOfferIdentifier:(id)arg1 dictionary:(id)arg2 ;
-(SSItemMedia *)offerMedia;
-(NSString *)actionDisplayName;
-(SSDialog *)confirmationDialog;
-(id)documentCannotOpenDialog;
-(id)documentRequiredHandlers;
-(id)documentUTI;
-(BOOL)isOneTapOffer;
-(SSDialog *)successDialog;
-(NSArray *)supportedDevices;
-(NSSet *)accountIdentifiers;
-(long long)estimatedDiskSpaceNeeded;
-(id)requiredSoftwareCapabilities;
-(void)setActionDisplayName:(NSString *)arg1 ;
-(void)setOneTapOffer:(BOOL)arg1 ;
-(void)setPriceDisplay:(NSString *)arg1 ;
-(BOOL)shouldShowPlusIcon;
-(SSItem *)_offerItem;
@end

