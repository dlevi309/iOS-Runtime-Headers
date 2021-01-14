/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/


@protocol CRKCardViewControlling <CRKEventResponding,CRKFeedbackDelegate,CRCommandHandling>
@property (nonatomic,retain) id<CRCard> card; 
@property (nonatomic,retain) id<CRKCardSectionViewSourcing> cardSectionViewSource; 
@property (assign,nonatomic,__weak) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; 
@required
-(id<CRCard>)card;
-(void)setCard:(id)arg1;
-(double)contentHeightForWidth:(double)arg1;
-(id<CRKCardViewControllerDelegate>)cardViewControllerDelegate;
-(id<CRKCardSectionViewSourcing>)cardSectionViewSource;
-(void)setCardSectionViewSource:(id)arg1;
-(void)setCardViewControllerDelegate:(id)arg1;

@end

