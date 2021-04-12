/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBColor, NTPBColorGradient;

@interface NTPBCardStyle : PBCodable <NSCopying> {

	NTPBColor* _callToActionBackgroundColor;
	NTPBColor* _callToActionForegroundColor;
	NTPBColor* _cardBackgroundColor;
	NTPBColor* _cardForegroundColor;
	NTPBColor* _eyebrowForegroundColor;
	NTPBColorGradient* _sauceGradient;
	NTPBColor* _titleForegroundColor;

}

@property (nonatomic,readonly) BOOL hasTitleForegroundColor; 
@property (nonatomic,retain) NTPBColor * titleForegroundColor;                     //@synthesize titleForegroundColor=_titleForegroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasEyebrowForegroundColor; 
@property (nonatomic,retain) NTPBColor * eyebrowForegroundColor;                   //@synthesize eyebrowForegroundColor=_eyebrowForegroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasCardBackgroundColor; 
@property (nonatomic,retain) NTPBColor * cardBackgroundColor;                      //@synthesize cardBackgroundColor=_cardBackgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasCardForegroundColor; 
@property (nonatomic,retain) NTPBColor * cardForegroundColor;                      //@synthesize cardForegroundColor=_cardForegroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasSauceGradient; 
@property (nonatomic,retain) NTPBColorGradient * sauceGradient;                    //@synthesize sauceGradient=_sauceGradient - In the implementation block
@property (nonatomic,readonly) BOOL hasCallToActionBackgroundColor; 
@property (nonatomic,retain) NTPBColor * callToActionBackgroundColor;              //@synthesize callToActionBackgroundColor=_callToActionBackgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasCallToActionForegroundColor; 
@property (nonatomic,retain) NTPBColor * callToActionForegroundColor;              //@synthesize callToActionForegroundColor=_callToActionForegroundColor - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NTPBColor *)titleForegroundColor;
-(NTPBColor *)eyebrowForegroundColor;
-(NTPBColor *)cardBackgroundColor;
-(NTPBColor *)cardForegroundColor;
-(NTPBColorGradient *)sauceGradient;
-(NTPBColor *)callToActionBackgroundColor;
-(NTPBColor *)callToActionForegroundColor;
-(void)setTitleForegroundColor:(NTPBColor *)arg1 ;
-(void)setEyebrowForegroundColor:(NTPBColor *)arg1 ;
-(void)setCardBackgroundColor:(NTPBColor *)arg1 ;
-(void)setCardForegroundColor:(NTPBColor *)arg1 ;
-(void)setSauceGradient:(NTPBColorGradient *)arg1 ;
-(void)setCallToActionBackgroundColor:(NTPBColor *)arg1 ;
-(void)setCallToActionForegroundColor:(NTPBColor *)arg1 ;
-(BOOL)hasTitleForegroundColor;
-(BOOL)hasEyebrowForegroundColor;
-(BOOL)hasCardBackgroundColor;
-(BOOL)hasCardForegroundColor;
-(BOOL)hasSauceGradient;
-(BOOL)hasCallToActionBackgroundColor;
-(BOOL)hasCallToActionForegroundColor;
@end

