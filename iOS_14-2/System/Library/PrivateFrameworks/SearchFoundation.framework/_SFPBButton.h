/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBButton.h>
@class _SFPBImage, NSData;


@protocol _SFPBButton <NSObject>
@property (nonatomic,retain) _SFPBImage * image; 
@property (nonatomic,retain) _SFPBImage * selectedImage; 
@property (assign,nonatomic) BOOL isSelected; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setImage:(id)arg1;
-(BOOL)isSelected;
-(NSData *)jsonData;
-(void)setIsSelected:(BOOL)arg1;
-(_SFPBImage *)image;
-(id)initWithDictionary:(id)arg1;
-(_SFPBImage *)selectedImage;
-(void)setSelectedImage:(id)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBImage, NSData, NSString;

@interface _SFPBButton : PBCodable <_SFPBButton, NSSecureCoding> {

	BOOL _isSelected;
	_SFPBImage* _image;
	_SFPBImage* _selectedImage;

}

@property (nonatomic,retain) _SFPBImage * image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) _SFPBImage * selectedImage;              //@synthesize selectedImage=_selectedImage - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                         //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setImage:(_SFPBImage *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(BOOL)isSelected;
-(NSData *)jsonData;
-(void)setIsSelected:(BOOL)arg1 ;
-(_SFPBImage *)image;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(_SFPBImage *)selectedImage;
-(void)writeTo:(id)arg1 ;
-(void)setSelectedImage:(_SFPBImage *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

