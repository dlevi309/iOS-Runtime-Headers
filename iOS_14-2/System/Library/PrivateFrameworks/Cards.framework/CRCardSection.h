/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

@class NSString, NSArray;


@protocol CRCardSection <NSObject,NSCopying>
@property (nonatomic,readonly) NSString * cardSectionIdentifier; 
@property (nonatomic,readonly) id<SFCardSection> backingCardSection; 
@property (nonatomic,readonly) NSArray * actionCommands; 
@property (nonatomic,readonly) BOOL hasNextCard; 
@optional
-(id<SFCardSection>)backingCardSection;
-(id)parametersForInteraction:(id)arg1;
-(NSArray *)actionCommands;
-(BOOL)hasNextCard;

@required
-(NSString *)cardSectionIdentifier;

@end

