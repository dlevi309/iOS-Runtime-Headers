/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

#import <libobjc.A.dylib/CRCardSectionViewAppearanceFeedback.h>

@protocol CRCardSection;
@class SFFeedback, NSString;

@interface CRBasicCardSectionViewAppearanceFeedback : NSObject <CRCardSectionViewAppearanceFeedback> {

	id<CRCardSection> _cardSection;

}

@property (nonatomic,retain) id<CRCardSection> cardSection;               //@synthesize cardSection=_cardSection - In the implementation block
@property (nonatomic,readonly) SFFeedback * backingFeedback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCardSection:(id<CRCardSection>)arg1 ;
-(id<CRCardSection>)cardSection;
@end

