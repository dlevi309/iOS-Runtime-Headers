/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

#import <Cards/Cards-Structs.h>
#import <libobjc.A.dylib/CRCardSection.h>

@protocol SFCardSection;
@class NSString, NSArray;

@interface CRBasicCardSection : NSObject <CRCardSection> {

	NSString* _cardSectionIdentifier;
	id<SFCardSection> _backingCardSection;

}

@property (nonatomic,retain) id<SFCardSection> backingCardSection;              //@synthesize backingCardSection=_backingCardSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * cardSectionIdentifier;                //@synthesize cardSectionIdentifier=_cardSectionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * actionCommands; 
@property (nonatomic,readonly) BOOL hasNextCard; 
+(BOOL)supportsSecureCoding;
+(id)basicCardSectionWithBackingCardSection:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<SFCardSection>)backingCardSection;
-(NSString *)cardSectionIdentifier;
-(void)setBackingCardSection:(id<SFCardSection>)arg1 ;
@end

