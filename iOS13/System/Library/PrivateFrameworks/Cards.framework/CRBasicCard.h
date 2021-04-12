/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

#import <Cards/Cards-Structs.h>
#import <libobjc.A.dylib/CRCard.h>

@class NSArray, NSSet, NSString, SFCard;

@interface CRBasicCard : NSObject <CRCard> {

	NSString* _cardIdentifier;
	unsigned long long cardFormat;
	NSArray* _cardSections;
	NSSet* _interactions;
	NSArray* _dismissalCommands;

}

@property (nonatomic,retain) NSArray * cardSections;                        //@synthesize cardSections=_cardSections - In the implementation block
@property (nonatomic,retain) NSSet * interactions;                          //@synthesize interactions=_interactions - In the implementation block
@property (nonatomic,retain) NSArray * dismissalCommands;                   //@synthesize dismissalCommands=_dismissalCommands - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * cardIdentifier;              //@synthesize cardIdentifier=_cardIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long cardFormat; 
@property (nonatomic,readonly) BOOL asynchronous; 
@property (nonatomic,readonly) BOOL flexibleSectionOrder; 
@property (nonatomic,readonly) SFCard * backingCard; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)interactions;
-(void)setInteractions:(NSSet *)arg1 ;
-(NSArray *)cardSections;
-(NSArray *)dismissalCommands;
-(void)setCardSections:(NSArray *)arg1 ;
-(void)setDismissalCommands:(NSArray *)arg1 ;
-(NSString *)cardIdentifier;
-(BOOL)asynchronous;
-(void)loadCardWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)cardFormat;
@end

