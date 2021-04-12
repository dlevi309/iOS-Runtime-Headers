/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(_SFPBImage *)thumbnail;
-(void)setThumbnail:(id)arg1;
-(NSData *)jsonData;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(id)arg1;
-(_SFPBText *)subtitleText;
-(void)setSubtitleText:(id)arg1;
-(_SFPBImage *)reviewGlyph;
-(void)setReviewGlyph:(id)arg1;
-(_SFPBImage *)overlayImage;
-(void)setOverlayImage:(id)arg1;
-(NSString *)reviewText;
-(void)setReviewText:(id)arg1;
-(_SFPBPunchout *)punchout;
-(void)setPunchout:(id)arg1;
-(NSArray *)buyOptions;
-(void)setBuyOptions:(id)arg1;
-(_SFPBImage *)contentAdvisoryImage;
-(void)setContentAdvisoryImage:(id)arg1;
-(id)initWithJSON:(id)arg1;
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(_SFPBImage *)thumbnail;
-(void)setThumbnail:(_SFPBImage *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(NSString *)contentAdvisory;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(_SFPBText *)subtitleText;
-(void)setSubtitleText:(_SFPBText *)arg1 ;
-(_SFPBImage *)reviewGlyph;
-(void)setReviewGlyph:(_SFPBImage *)arg1 ;
-(_SFPBImage *)overlayImage;
-(void)setOverlayImage:(_SFPBImage *)arg1 ;
-(NSString *)reviewText;
-(void)setReviewText:(NSString *)arg1 ;
-(_SFPBPunchout *)punchout;
-(void)setPunchout:(_SFPBPunchout *)arg1 ;
-(void)setSubtitleCustomLineBreaking:(id)arg1 ;
-(NSArray *)buyOptions;
-(void)setBuyOptions:(NSArray *)arg1 ;
-(_SFPBImage *)contentAdvisoryImage;
-(void)setContentAdvisoryImage:(_SFPBImage *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
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
@end

