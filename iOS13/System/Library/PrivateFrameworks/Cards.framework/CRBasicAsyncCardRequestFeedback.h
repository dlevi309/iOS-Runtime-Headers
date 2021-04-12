/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

#import <libobjc.A.dylib/CRAsyncCardRequestFeedback.h>

@protocol CRCard;
@class NSString, SFFeedback;

@interface CRBasicAsyncCardRequestFeedback : NSObject <CRAsyncCardRequestFeedback> {

	id<CRCard> baseCard;
	id<CRCard> requestedCard;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SFFeedback * backingFeedback; 
@property (nonatomic,retain) id<CRCard> baseCard; 
@property (nonatomic,retain) id<CRCard> requestedCard; 
-(void)setBaseCard:(id<CRCard>)arg1 ;
-(void)setRequestedCard:(id<CRCard>)arg1 ;
-(id<CRCard>)baseCard;
-(id<CRCard>)requestedCard;
@end

