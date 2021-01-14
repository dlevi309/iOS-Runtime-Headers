/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <libobjc.A.dylib/CRCardSection.h>

@class NSString, NSArray;

@interface SiriUILegacyCardSection : NSObject <CRCardSection> {

	NSString* _cardSectionIdentifier;

}

@property (nonatomic,retain) NSString * cardSectionIdentifier;                    //@synthesize cardSectionIdentifier=_cardSectionIdentifier - In the implementation block
@property (nonatomic,readonly) id<SFCardSection> backingCardSection; 
@property (nonatomic,readonly) NSArray * actionCommands; 
@property (nonatomic,readonly) BOOL hasNextCard; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)cardSectionIdentifier;
-(void)setCardSectionIdentifier:(NSString *)arg1 ;
@end

