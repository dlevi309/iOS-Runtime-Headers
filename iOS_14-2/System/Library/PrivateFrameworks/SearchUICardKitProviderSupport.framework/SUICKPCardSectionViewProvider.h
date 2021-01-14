/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) id<CRCard> card;                                                   //@synthesize card=_card - In the implementation block
@property (nonatomic,readonly) NSArray * viewConfigurations;                                      //@synthesize viewConfigurations=_viewConfigurations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * providerIdentifier; 
-(id<CRCard>)card;
-(NSString *)providerIdentifier;
-(id<CRKCardSectionViewProviderDelegate>)delegate;
-(void)setDelegate:(id<CRKCardSectionViewProviderDelegate>)arg1 ;
-(id)initWithCard:(id)arg1 ;
-(unsigned long long)displayPriorityForCardSection:(id)arg1 ;
-(NSArray *)viewConfigurations;
@end

