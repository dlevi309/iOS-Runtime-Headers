/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

@class NSString, NSArray;


@protocol CRCardSection <NSObject,NSCopying>
@property (nonatomic,readonly) NSString * cardSectionIdentifier; 
@property (nonatomic,readonly) id<SFCardSection> backingCardSection; 
@property (nonatomic,readonly) NSArray * actionCommands; 
@property (nonatomic,readonly) BOOL hasNextCard; 
@optional
-(NSArray *)actionCommands;
-(id<SFCardSection>)backingCardSection;
-(id)parametersForInteraction:(id)arg1;
-(BOOL)hasNextCard;

@required
-(NSString *)cardSectionIdentifier;

@end

