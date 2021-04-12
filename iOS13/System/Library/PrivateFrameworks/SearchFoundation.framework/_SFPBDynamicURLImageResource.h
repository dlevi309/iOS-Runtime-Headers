/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1;
-(NSData *)jsonData;
-(_SFPBGraphicalFloat *)pixelWidth;
-(void)setPixelWidth:(id)arg1;
-(_SFPBGraphicalFloat *)pixelHeight;
-(void)setPixelHeight:(id)arg1;
-(NSString *)formatURL;
-(void)setFormatURL:(id)arg1;
-(BOOL)supportsResizing;
-(void)setSupportsResizing:(BOOL)arg1;
-(NSArray *)imageOptions;
-(void)setImageOptions:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)addImageOptions:(id)arg1;
-(void)clearImageOptions;
-(unsigned long long)imageOptionsCount;
-(id)imageOptionsAtIndex:(unsigned long long)arg1;

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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SFPBGraphicalFloat * pixelWidth;               //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (nonatomic,retain) _SFPBGraphicalFloat * pixelHeight;              //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,copy) NSString * formatURL;                             //@synthesize formatURL=_formatURL - In the implementation block
@property (assign,nonatomic) BOOL supportsResizing;                          //@synthesize supportsResizing=_supportsResizing - In the implementation block
@property (nonatomic,copy) NSArray * imageOptions;                           //@synthesize imageOptions=_imageOptions - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(_SFPBGraphicalFloat *)pixelWidth;
-(void)setPixelWidth:(_SFPBGraphicalFloat *)arg1 ;
-(_SFPBGraphicalFloat *)pixelHeight;
-(void)setPixelHeight:(_SFPBGraphicalFloat *)arg1 ;
-(NSString *)formatURL;
-(void)setFormatURL:(NSString *)arg1 ;
-(BOOL)supportsResizing;
-(void)setSupportsResizing:(BOOL)arg1 ;
-(NSArray *)imageOptions;
-(void)setImageOptions:(NSArray *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addImageOptions:(id)arg1 ;
-(void)clearImageOptions;
-(unsigned long long)imageOptionsCount;
-(id)imageOptionsAtIndex:(unsigned long long)arg1 ;
@end

