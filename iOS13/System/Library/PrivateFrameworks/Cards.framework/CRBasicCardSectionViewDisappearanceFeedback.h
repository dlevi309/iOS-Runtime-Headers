/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

#import <libobjc.A.dylib/CRCardSectionViewDisappearanceFeedback.h>

@protocol CRCardSection;
@class NSString, SFFeedback;

@interface CRBasicCardSectionViewDisappearanceFeedback : NSObject <CRCardSectionViewDisappearanceFeedback> {

	id<CRCardSection> _cardSection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SFFeedback * backingFeedback; 
@property (nonatomic,retain) id<CRCardSection> cardSection;               //@synthesize cardSection=_cardSection - In the implementation block
-(id<CRCardSection>)cardSection;
-(void)setCardSection:(id<CRCardSection>)arg1 ;
@end

