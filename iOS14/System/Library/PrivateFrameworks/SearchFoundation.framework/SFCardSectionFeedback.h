/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCardSectionId:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setResultId:(NSString *)arg1 ;
-(NSString *)cardSectionId;
-(void)setCardSection:(id<SFCardSection>)arg1 ;
-(id)initWithCardSection:(id)arg1 ;
-(NSString *)resultId;
-(id)initWithCoder:(id)arg1 ;
-(id<SFCardSection>)cardSection;
@end

