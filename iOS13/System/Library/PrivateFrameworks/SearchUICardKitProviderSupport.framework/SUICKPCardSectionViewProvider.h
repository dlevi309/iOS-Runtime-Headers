/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
*/

#import <libobjc.A.dylib/CRKIdentifiedCardSectionViewProviding.h>

@protocol CRCard, CRKCardSectionViewProviderDelegate;
@class SUICKPFeedbackDelegateDemultiplexer, NSArray, NSString;

@interface SUICKPCardSectionViewProvider : NSObject <CRKIdentifiedCardSectionViewProviding> {

	SUICKPFeedbackDelegateDemultiplexer* _feedbackDelegateDemux;
	id<CRCard> _card;
	NSArray* _viewConfigurations;
	id<CRKCardSectionViewProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CRKCardSectionViewProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRCard> card;                                                   //@synthesize card=_card - In the implementation block
@property (nonatomic,readonly) NSArray * viewConfigurations;                                      //@synthesize viewConfigurations=_viewConfigurations - In the implementation block
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
-(id<CRKCardSectionViewProviderDelegate>)delegate;
-(void)setDelegate:(id<CRKCardSectionViewProviderDelegate>)arg1 ;
-(NSString *)providerIdentifier;
-(id<CRCard>)card;
-(id)initWithCard:(id)arg1 ;
-(unsigned long long)displayPriorityForCardSection:(id)arg1 ;
-(NSArray *)viewConfigurations;
@end

