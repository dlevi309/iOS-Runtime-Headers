/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/


@protocol CRAsyncCardRequestFeedback <CRFeedback>
@property (nonatomic,retain) id<CRCard> baseCard; 
@property (nonatomic,retain) id<CRCard> requestedCard; 
@required
-(void)setBaseCard:(id)arg1;
-(void)setRequestedCard:(id)arg1;
-(id<CRCard>)baseCard;
-(id<CRCard>)requestedCard;

@end

