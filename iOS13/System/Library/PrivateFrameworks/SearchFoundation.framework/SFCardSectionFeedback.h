/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@protocol SFCardSection;
@class NSString;

@interface SFCardSectionFeedback : SFFeedback {

	id<SFCardSection> _cardSection;
	NSString* _cardSectionId;
	NSString* _resultId;

}

@property (nonatomic,retain) id<SFCardSection> cardSection;              //@synthesize cardSection=_cardSection - In the implementation block
@property (nonatomic,copy) NSString * cardSectionId;                     //@synthesize cardSectionId=_cardSectionId - In the implementation block
@property (nonatomic,copy) NSString * resultId;                          //@synthesize resultId=_resultId - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<SFCardSection>)cardSection;
-(void)setCardSection:(id<SFCardSection>)arg1 ;
-(NSString *)cardSectionId;
-(void)setCardSectionId:(NSString *)arg1 ;
-(id)initWithCardSection:(id)arg1 ;
-(NSString *)resultId;
-(void)setResultId:(NSString *)arg1 ;
@end

