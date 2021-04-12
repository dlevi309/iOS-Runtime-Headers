/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

#import <libobjc.A.dylib/CRAsyncCardReceiptFeedback.h>

@protocol CRCard;
@class SFFeedback, NSString;

@interface CRBasicAsyncCardReceiptFeedback : NSObject <CRAsyncCardReceiptFeedback> {

	id<CRCard> baseCard;
	id<CRCard> requestedCard;
	id<CRCard> receivedCard;

}

@property (nonatomic,retain) id<CRCard> baseCard; 
@property (nonatomic,retain) id<CRCard> requestedCard; 
@property (nonatomic,retain) id<CRCard> receivedCard; 
@property (nonatomic,readonly) SFFeedback * backingFeedback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBaseCard:(id<CRCard>)arg1 ;
-(void)setRequestedCard:(id<CRCard>)arg1 ;
-(void)setReceivedCard:(id<CRCard>)arg1 ;
-(id<CRCard>)baseCard;
-(id<CRCard>)requestedCard;
-(id<CRCard>)receivedCard;
@end

