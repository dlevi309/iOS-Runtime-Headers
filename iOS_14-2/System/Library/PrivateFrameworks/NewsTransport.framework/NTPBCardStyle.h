/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(NTPBColorGradient *)sauceGradient;
-(void)setCardForegroundColor:(NTPBColor *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NTPBColor *)titleForegroundColor;
-(NTPBColor *)cardBackgroundColor;
-(id)description;
-(void)setCardBackgroundColor:(NTPBColor *)arg1 ;
-(void)setTitleForegroundColor:(NTPBColor *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasSauceGradient;
-(NTPBColor *)eyebrowForegroundColor;
-(BOOL)hasTitleForegroundColor;
-(BOOL)hasEyebrowForegroundColor;
-(BOOL)hasCardBackgroundColor;
-(BOOL)hasCardForegroundColor;
-(BOOL)hasCallToActionBackgroundColor;
-(BOOL)hasCallToActionForegroundColor;
-(void)writeTo:(id)arg1 ;
-(void)setSauceGradient:(NTPBColorGradient *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NTPBColor *)callToActionBackgroundColor;
-(NTPBColor *)callToActionForegroundColor;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCallToActionBackgroundColor:(NTPBColor *)arg1 ;
-(void)setCallToActionForegroundColor:(NTPBColor *)arg1 ;
-(void)dealloc;
-(void)setEyebrowForegroundColor:(NTPBColor *)arg1 ;
-(NTPBColor *)cardForegroundColor;
@end

