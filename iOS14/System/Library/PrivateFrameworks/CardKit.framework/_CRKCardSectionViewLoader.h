/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

#import <libobjc.A.dylib/CRKCardSectionViewSourcing.h>

@protocol _CRKCardSectionViewLoaderDelegate, CRCard;
@class NSMutableDictionary, NSMutableSet, NSString;

@interface _CRKCardSectionViewLoader : NSObject <CRKCardSectionViewSourcing> {

	NSMutableDictionary* _cardSectionViewConfigurationsByCardSectionIdentifiersByProviderIdentifiers;
	NSMutableDictionary* _vetoingProviderIdentifiersByVetoedCardSectionIdentifiers;
	NSMutableSet* _identifiedCardSectionViewProviders;
	id<_CRKCardSectionViewLoaderDelegate> _delegate;
	id<CRCard> _loadedCard;

}

@property (assign,nonatomic,__weak) id<_CRKCardSectionViewLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableSet * identifiedCardSectionViewProviders;                //@synthesize identifiedCardSectionViewProviders=_identifiedCardSectionViewProviders - In the implementation block
@property (nonatomic,retain) id<CRCard> loadedCard;                                              //@synthesize loadedCard=_loadedCard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<_CRKCardSectionViewLoaderDelegate>)delegate;
-(void)setDelegate:(id<_CRKCardSectionViewLoaderDelegate>)arg1 ;
-(id)_allViewConfigurations;
-(BOOL)cardSectionShouldBeDisplayed:(id)arg1 ;
-(id)viewConfigurationForCardSection:(id)arg1 ;
-(void)_loadIdentifiedCardSectionViewProvidersFromCard:(id)arg1 identifiedProviders:(id)arg2 delegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id<CRCard>)loadedCard;
-(id)_viewConfigurationForCardSection:(id)arg1 providerIdentifier:(id)arg2 ;
-(NSMutableSet *)identifiedCardSectionViewProviders;
-(void)setLoadedCard:(id<CRCard>)arg1 ;
@end

