/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBDynamicURLImageResource.h>
@class _SFPBGraphicalFloat, NSString, NSArray, NSData;


@protocol _SFPBDynamicURLImageResource <NSObject>
@property (nonatomic,retain) _SFPBGraphicalFloat * pixelWidth; 
@property (nonatomic,retain) _SFPBGraphicalFloat * pixelHeight; 
@property (nonatomic,copy) NSString * formatURL; 
@property (assign,nonatomic) BOOL supportsResizing; 
@property (nonatomic,copy) NSArray * imageOptions; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSArray *)imageOptions;
-(NSString *)formatURL;
-(void)setFormatURL:(id)arg1;
-(BOOL)supportsResizing;
-(void)setSupportsResizing:(BOOL)arg1;
-(void)setImageOptions:(id)arg1;
-(NSData *)jsonData;
-(void)addImageOptions:(id)arg1;
-(void)clearImageOptions;
-(unsigned long long)imageOptionsCount;
-(id)imageOptionsAtIndex:(unsigned long long)arg1;
-(id)initWithDictionary:(id)arg1;
-(void)setPixelHeight:(id)arg1;
-(void)setPixelWidth:(id)arg1;
-(_SFPBGraphicalFloat *)pixelHeight;
-(id)initWithJSON:(id)arg1;
-(_SFPBGraphicalFloat *)pixelWidth;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBGraphicalFloat, NSString, NSArray, NSData;

@interface _SFPBDynamicURLImageResource : PBCodable <_SFPBDynamicURLImageResource, NSSecureCoding> {

	BOOL _supportsResizing;
	_SFPBGraphicalFloat* _pixelWidth;
	_SFPBGraphicalFloat* _pixelHeight;
	NSString* _formatURL;
	NSArray* _imageOptions;

}

@property (nonatomic,retain) _SFPBGraphicalFloat * pixelWidth;               //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * pixelHeight;              //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,copy) NSString * formatURL;                             //@synthesize formatURL=_formatURL - In the implementation block
@property (assign,nonatomic) BOOL supportsResizing;                          //@synthesize supportsResizing=_supportsResizing - In the implementation block
@property (nonatomic,copy) NSArray * imageOptions;                           //@synthesize imageOptions=_imageOptions - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(NSArray *)imageOptions;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)formatURL;
-(void)setFormatURL:(NSString *)arg1 ;
-(BOOL)supportsResizing;
-(void)setSupportsResizing:(BOOL)arg1 ;
-(void)setImageOptions:(NSArray *)arg1 ;
-(NSData *)jsonData;
-(void)addImageOptions:(id)arg1 ;
-(void)clearImageOptions;
-(unsigned long long)imageOptionsCount;
-(id)imageOptionsAtIndex:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setPixelHeight:(_SFPBGraphicalFloat *)arg1 ;
-(void)setPixelWidth:(_SFPBGraphicalFloat *)arg1 ;
-(_SFPBGraphicalFloat *)pixelHeight;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(_SFPBGraphicalFloat *)pixelWidth;
@end

