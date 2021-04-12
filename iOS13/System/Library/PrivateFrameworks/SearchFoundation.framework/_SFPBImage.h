/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBImage.h>
@class NSData, _SFPBGraphicalFloat, _SFPBPointSize, NSString, _SFPBURLImage, _SFPBContactImage, _SFPBMonogramImage, _SFPBLocalImage, _SFPBAppIconImage, _SFPBMediaArtworkImage, _SFPBCalendarImage;


@protocol _SFPBImage <NSObject>
@property (copy) NSData * imageData; 
@property (assign,nonatomic) BOOL isTemplate; 
@property (assign,nonatomic) BOOL shouldCropToCircle; 
@property (nonatomic,retain) _SFPBGraphicalFloat * cornerRadius; 
@property (nonatomic,retain) _SFPBGraphicalFloat * scale; 
@property (nonatomic,retain) _SFPBPointSize * size; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSString * keyColor; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int source; 
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) _SFPBURLImage * urlImage; 
@property (nonatomic,retain) _SFPBContactImage * contactImage; 
@property (nonatomic,retain) _SFPBMonogramImage * monogramImage; 
@property (nonatomic,retain) _SFPBLocalImage * localImage; 
@property (nonatomic,retain) _SFPBAppIconImage * appIconImage; 
@property (nonatomic,retain) _SFPBMediaArtworkImage * mediaArtworkImage; 
@property (nonatomic,retain) _SFPBCalendarImage * calendarImage; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(int)type;
-(void)setType:(int)arg1;
-(void)setSource:(int)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)identifier;
-(_SFPBPointSize *)size;
-(int)source;
-(void)setIdentifier:(id)arg1;
-(_SFPBGraphicalFloat *)scale;
-(NSString *)contentType;
-(void)setContentType:(id)arg1;
-(void)setSize:(id)arg1;
-(void)setScale:(id)arg1;
-(void)setCornerRadius:(id)arg1;
-(_SFPBGraphicalFloat *)cornerRadius;
-(BOOL)isTemplate;
-(void)setIsTemplate:(BOOL)arg1;
-(NSData *)imageData;
-(void)setImageData:(id)arg1;
-(_SFPBLocalImage *)localImage;
-(void)setLocalImage:(id)arg1;
-(NSData *)jsonData;
-(BOOL)shouldCropToCircle;
-(void)setShouldCropToCircle:(BOOL)arg1;
-(NSString *)keyColor;
-(void)setKeyColor:(id)arg1;
-(void)setUrlImage:(id)arg1;
-(void)setContactImage:(id)arg1;
-(void)setMonogramImage:(id)arg1;
-(void)setAppIconImage:(id)arg1;
-(void)setMediaArtworkImage:(id)arg1;
-(void)setCalendarImage:(id)arg1;
-(_SFPBURLImage *)urlImage;
-(_SFPBContactImage *)contactImage;
-(_SFPBMonogramImage *)monogramImage;
-(_SFPBAppIconImage *)appIconImage;
-(_SFPBMediaArtworkImage *)mediaArtworkImage;
-(_SFPBCalendarImage *)calendarImage;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, _SFPBGraphicalFloat, _SFPBPointSize, NSString, _SFPBURLImage, _SFPBContactImage, _SFPBMonogramImage, _SFPBLocalImage, _SFPBAppIconImage, _SFPBMediaArtworkImage, _SFPBCalendarImage;

@interface _SFPBImage : PBCodable <_SFPBImage, NSSecureCoding> {

	BOOL _isTemplate;
	BOOL _shouldCropToCircle;
	int _source;
	int _type;
	NSData* _imageData;
	_SFPBGraphicalFloat* _cornerRadius;
	_SFPBGraphicalFloat* _scale;
	_SFPBPointSize* _size;
	NSString* _contentType;
	NSString* _keyColor;
	NSString* _identifier;
	_SFPBURLImage* _urlImage;
	_SFPBContactImage* _contactImage;
	_SFPBMonogramImage* _monogramImage;
	_SFPBLocalImage* _localImage;
	_SFPBAppIconImage* _appIconImage;
	_SFPBMediaArtworkImage* _mediaArtworkImage;
	_SFPBCalendarImage* _calendarImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSData * imageData;                                                  //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) BOOL isTemplate;                                         //@synthesize isTemplate=_isTemplate - In the implementation block
@property (assign,nonatomic) BOOL shouldCropToCircle;                                 //@synthesize shouldCropToCircle=_shouldCropToCircle - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * scale;                             //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) _SFPBPointSize * size;                                   //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                    //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy) NSString * keyColor;                                       //@synthesize keyColor=_keyColor - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int source;                                              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) int type;                                                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) _SFPBURLImage * urlImage;                                //@synthesize urlImage=_urlImage - In the implementation block
@property (nonatomic,retain) _SFPBContactImage * contactImage;                        //@synthesize contactImage=_contactImage - In the implementation block
@property (nonatomic,retain) _SFPBMonogramImage * monogramImage;                      //@synthesize monogramImage=_monogramImage - In the implementation block
@property (nonatomic,retain) _SFPBLocalImage * localImage;                            //@synthesize localImage=_localImage - In the implementation block
@property (nonatomic,retain) _SFPBAppIconImage * appIconImage;                        //@synthesize appIconImage=_appIconImage - In the implementation block
@property (nonatomic,retain) _SFPBMediaArtworkImage * mediaArtworkImage;              //@synthesize mediaArtworkImage=_mediaArtworkImage - In the implementation block
@property (nonatomic,retain) _SFPBCalendarImage * calendarImage;                      //@synthesize calendarImage=_calendarImage - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setSource:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(_SFPBPointSize *)size;
-(int)source;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(_SFPBGraphicalFloat *)scale;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSize:(_SFPBPointSize *)arg1 ;
-(void)setScale:(_SFPBGraphicalFloat *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCornerRadius:(_SFPBGraphicalFloat *)arg1 ;
-(_SFPBGraphicalFloat *)cornerRadius;
-(BOOL)isTemplate;
-(void)setIsTemplate:(BOOL)arg1 ;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
-(_SFPBLocalImage *)localImage;
-(void)setLocalImage:(_SFPBLocalImage *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(BOOL)shouldCropToCircle;
-(void)setShouldCropToCircle:(BOOL)arg1 ;
-(NSString *)keyColor;
-(void)setKeyColor:(NSString *)arg1 ;
-(void)setUrlImage:(_SFPBURLImage *)arg1 ;
-(void)setContactImage:(_SFPBContactImage *)arg1 ;
-(void)setMonogramImage:(_SFPBMonogramImage *)arg1 ;
-(void)setAppIconImage:(_SFPBAppIconImage *)arg1 ;
-(void)setMediaArtworkImage:(_SFPBMediaArtworkImage *)arg1 ;
-(void)setCalendarImage:(_SFPBCalendarImage *)arg1 ;
-(_SFPBURLImage *)urlImage;
-(_SFPBContactImage *)contactImage;
-(_SFPBMonogramImage *)monogramImage;
-(_SFPBAppIconImage *)appIconImage;
-(_SFPBMediaArtworkImage *)mediaArtworkImage;
-(_SFPBCalendarImage *)calendarImage;
-(id)initWithJSON:(id)arg1 ;
@end

