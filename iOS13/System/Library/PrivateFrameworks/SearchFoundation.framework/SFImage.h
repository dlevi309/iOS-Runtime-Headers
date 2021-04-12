/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFImage.h>
@class NSData, NSString, NSDictionary;


@protocol SFImage <NSObject>
@property (copy) NSData * imageData; 
@property (assign,nonatomic) BOOL isTemplate; 
@property (assign,nonatomic) BOOL shouldCropToCircle; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSString * keyColor; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int source; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setSource:(int)arg1;
-(NSString *)identifier;
-(CGSize)size;
-(int)source;
-(void)setIdentifier:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(double)scale;
-(NSString *)contentType;
-(void)setContentType:(id)arg1;
-(void)setSize:(CGSize)arg1;
-(void)setScale:(double)arg1;
-(void)setCornerRadius:(double)arg1;
-(double)cornerRadius;
-(BOOL)isTemplate;
-(void)setIsTemplate:(BOOL)arg1;
-(NSData *)imageData;
-(void)setImageData:(id)arg1;
-(NSData *)jsonData;
-(BOOL)shouldCropToCircle;
-(void)setShouldCropToCircle:(BOOL)arg1;
-(NSString *)keyColor;
-(void)setKeyColor:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSDictionary;

@interface SFImage : NSObject <SFImage, NSSecureCoding, NSCopying> {

	SCD_Struct_SF8 _has;
	BOOL _isTemplate;
	BOOL _shouldCropToCircle;
	int _source;
	NSData* _imageData;
	double _cornerRadius;
	double _scale;
	NSString* _contentType;
	NSString* _keyColor;
	NSString* _identifier;
	CGSize _size;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSData * imageData;                                                 //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) BOOL isTemplate;                                        //@synthesize isTemplate=_isTemplate - In the implementation block
@property (assign,nonatomic) BOOL shouldCropToCircle;                                //@synthesize shouldCropToCircle=_shouldCropToCircle - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double scale;                                           //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGSize size;                                            //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSString * contentType;                                   //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy) NSString * keyColor;                                      //@synthesize keyColor=_keyColor - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int source;                                             //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
+(id)imageWithData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSource:(int)arg1 ;
-(NSString *)identifier;
-(CGSize)size;
-(int)source;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(double)scale;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setScale:(double)arg1 ;
-(BOOL)hasSource;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(BOOL)isTemplate;
-(void)setIsTemplate:(BOOL)arg1 ;
-(NSData *)imageData;
-(BOOL)hasSize;
-(BOOL)hasScale;
-(void)setImageData:(NSData *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(BOOL)shouldCropToCircle;
-(void)setShouldCropToCircle:(BOOL)arg1 ;
-(NSString *)keyColor;
-(void)setKeyColor:(NSString *)arg1 ;
-(void)loadImageDataWithCompletionAndErrorHandler:(/*^block*/id)arg1 ;
-(void)loadImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hasIsTemplate;
-(BOOL)hasShouldCropToCircle;
-(BOOL)hasCornerRadius;
@end

