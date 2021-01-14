/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

