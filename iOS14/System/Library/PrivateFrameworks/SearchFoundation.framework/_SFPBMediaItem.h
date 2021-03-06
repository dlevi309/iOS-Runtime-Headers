/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMediaItem.h>
@class NSString, _SFPBText, _SFPBImage, _SFPBPunchout, NSArray, NSData;


@protocol _SFPBMediaItem <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) _SFPBText * subtitleText; 
@property (nonatomic,retain) _SFPBImage * thumbnail; 
@property (nonatomic,retain) _SFPBImage * reviewGlyph; 
@property (nonatomic,retain) _SFPBImage * overlayImage; 
@property (nonatomic,copy) NSString * reviewText; 
@property (nonatomic,retain) _SFPBPunchout * punchout; 
@property (nonatomic,copy) NSArray * subtitleCustomLineBreakings; 
@property (nonatomic,copy) NSArray * buyOptions; 
@property (nonatomic,copy) NSString * contentAdvisory; 
@property (nonatomic,retain) _SFPBImage * contentAdvisoryImage; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setPunchout:(id)arg1;
-(void)setOverlayImage:(id)arg1;
-(_SFPBImage *)thumbnail;
-(void)setContentAdvisory:(id)arg1;
-(void)setReviewGlyph:(id)arg1;
-(void)setBuyOptions:(id)arg1;
-(void)setContentAdvisoryImage:(id)arg1;
-(_SFPBImage *)overlayImage;
-(NSData *)jsonData;
-(NSString *)contentAdvisory;
-(void)setTitle:(id)arg1;
-(_SFPBImage *)reviewGlyph;
-(NSString *)reviewText;
-(NSArray *)buyOptions;
-(_SFPBImage *)contentAdvisoryImage;
-(void)addSubtitleCustomLineBreaking:(id)arg1;
-(void)addBuyOptions:(id)arg1;
-(NSArray *)subtitleCustomLineBreakings;
-(void)clearSubtitleCustomLineBreaking;
-(unsigned long long)subtitleCustomLineBreakingCount;
-(id)subtitleCustomLineBreakingAtIndex:(unsigned long long)arg1;
-(void)clearBuyOptions;
-(unsigned long long)buyOptionsCount;
-(id)buyOptionsAtIndex:(unsigned long long)arg1;
-(void)setSubtitleCustomLineBreakings:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setSubtitleText:(id)arg1;
-(_SFPBText *)subtitleText;
-(_SFPBPunchout *)punchout;
-(void)setReviewText:(id)arg1;
-(void)setThumbnail:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSString *)title;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _SFPBText, _SFPBImage, _SFPBPunchout, NSArray, NSData;

@interface _SFPBMediaItem : PBCodable <_SFPBMediaItem, NSSecureCoding> {

	NSString* _title;
	_SFPBText* _subtitleText;
	_SFPBImage* _thumbnail;
	_SFPBImage* _reviewGlyph;
	_SFPBImage* _overlayImage;
	NSString* _reviewText;
	_SFPBPunchout* _punchout;
	NSArray* _subtitleCustomLineBreakings;
	NSArray* _buyOptions;
	NSString* _contentAdvisory;
	_SFPBImage* _contentAdvisoryImage;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) _SFPBText * subtitleText;                         //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,retain) _SFPBImage * thumbnail;                           //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) _SFPBImage * reviewGlyph;                         //@synthesize reviewGlyph=_reviewGlyph - In the implementation block
@property (nonatomic,retain) _SFPBImage * overlayImage;                        //@synthesize overlayImage=_overlayImage - In the implementation block
@property (nonatomic,copy) NSString * reviewText;                              //@synthesize reviewText=_reviewText - In the implementation block
@property (nonatomic,retain) _SFPBPunchout * punchout;                         //@synthesize punchout=_punchout - In the implementation block
@property (nonatomic,copy) NSArray * subtitleCustomLineBreakings;              //@synthesize subtitleCustomLineBreakings=_subtitleCustomLineBreakings - In the implementation block
@property (nonatomic,copy) NSArray * buyOptions;                               //@synthesize buyOptions=_buyOptions - In the implementation block
@property (nonatomic,copy) NSString * contentAdvisory;                         //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
@property (nonatomic,retain) _SFPBImage * contentAdvisoryImage;                //@synthesize contentAdvisoryImage=_contentAdvisoryImage - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setPunchout:(_SFPBPunchout *)arg1 ;
-(void)setOverlayImage:(_SFPBImage *)arg1 ;
-(_SFPBImage *)thumbnail;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(void)setReviewGlyph:(_SFPBImage *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(void)setBuyOptions:(NSArray *)arg1 ;
-(void)setSubtitleCustomLineBreaking:(id)arg1 ;
-(void)setContentAdvisoryImage:(_SFPBImage *)arg1 ;
-(_SFPBImage *)overlayImage;
-(NSData *)jsonData;
-(NSString *)contentAdvisory;
-(void)setTitle:(NSString *)arg1 ;
-(_SFPBImage *)reviewGlyph;
-(NSString *)reviewText;
-(NSArray *)buyOptions;
-(_SFPBImage *)contentAdvisoryImage;
-(void)addSubtitleCustomLineBreaking:(id)arg1 ;
-(void)addBuyOptions:(id)arg1 ;
-(NSArray *)subtitleCustomLineBreakings;
-(void)clearSubtitleCustomLineBreaking;
-(unsigned long long)subtitleCustomLineBreakingCount;
-(id)subtitleCustomLineBreakingAtIndex:(unsigned long long)arg1 ;
-(void)clearBuyOptions;
-(unsigned long long)buyOptionsCount;
-(id)buyOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setSubtitleCustomLineBreakings:(NSArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSubtitleText:(_SFPBText *)arg1 ;
-(_SFPBText *)subtitleText;
-(_SFPBPunchout *)punchout;
-(unsigned long long)hash;
-(void)setReviewText:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setThumbnail:(_SFPBImage *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

