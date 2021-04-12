/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
*/

#import <libobjc.A.dylib/INUICKPViewControllerAllocatingDelegate.h>
#import <libobjc.A.dylib/CRKIdentifiedCardSectionViewProviding.h>

@protocol CRCard, INUICKPViewControllerAllocating, CRKCardSectionViewProviderDelegate;
@class NSArray, NSString;

@interface INUICKPCardSectionViewProvider : NSObject <INUICKPViewControllerAllocatingDelegate, CRKIdentifiedCardSectionViewProviding> {

	id<CRCard> _card;
	NSArray* _viewConfigurations;
	id<INUICKPViewControllerAllocating> _allocator;
	id<CRKCardSectionViewProviderDelegate> _cardSectionViewProviderDelegate;

}

@property (nonatomic,copy) NSArray * viewConfigurations;                                                                 //@synthesize viewConfigurations=_viewConfigurations - In the implementation block
@property (nonatomic,retain) id<INUICKPViewControllerAllocating> allocator;                                              //@synthesize allocator=_allocator - In the implementation block
@property (assign,nonatomic,__weak) id<CRKCardSectionViewProviderDelegate> cardSectionViewProviderDelegate;              //@synthesize cardSectionViewProviderDelegate=_cardSectionViewProviderDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRCard> card;                                                                          //@synthesize card=_card - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
+(void)requestInstanceWithCard:(id)arg1 delegate:(id)arg2 allocator:(id)arg3 reply:(/*^block*/id)arg4 ;
+(id)_viewConfigurationsFromAllocator:(id)arg1 ;
+(void)requestInstanceFromDefaultAllocatorWithCard:(id)arg1 delegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(NSString *)providerIdentifier;
-(id<CRCard>)card;
-(id<INUICKPViewControllerAllocating>)allocator;
-(BOOL)vetoDisplayOfCardSection:(id)arg1 ;
-(unsigned long long)displayPriorityForCardSection:(id)arg1 ;
-(NSArray *)viewConfigurations;
-(void)setCardSectionViewProviderDelegate:(id<CRKCardSectionViewProviderDelegate>)arg1 ;
-(void)setViewConfigurations:(NSArray *)arg1 ;
-(void)setAllocator:(id<INUICKPViewControllerAllocating>)arg1 ;
-(id<CRKCardSectionViewProviderDelegate>)cardSectionViewProviderDelegate;
-(double)boundingWidthForViewControllerAllocator:(id)arg1 ;
@end

