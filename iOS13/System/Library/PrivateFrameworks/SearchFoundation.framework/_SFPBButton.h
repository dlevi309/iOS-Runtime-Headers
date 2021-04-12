/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1;
-(_SFPBImage *)image;
-(void)setImage:(id)arg1;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1;
-(void)setSelectedImage:(id)arg1;
-(_SFPBImage *)selectedImage;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBImage, NSData, NSString;

@interface _SFPBButton : PBCodable <_SFPBButton, NSSecureCoding> {

	BOOL _isSelected;
	_SFPBImage* _image;
	_SFPBImage* _selectedImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SFPBImage * image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) _SFPBImage * selectedImage;              //@synthesize selectedImage=_selectedImage - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                         //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(_SFPBImage *)image;
-(void)setImage:(_SFPBImage *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(void)setSelectedImage:(_SFPBImage *)arg1 ;
-(_SFPBImage *)selectedImage;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
@end

