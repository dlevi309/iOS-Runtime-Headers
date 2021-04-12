/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFButton.h>
@class SFImage, NSDictionary, NSData;


@protocol SFButton <NSObject>
@property (nonatomic,retain) SFImage * image; 
@property (nonatomic,retain) SFImage * selectedImage; 
@property (assign,nonatomic) BOOL isSelected; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(SFImage *)image;
-(void)setImage:(id)arg1;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1;
-(void)setSelectedImage:(id)arg1;
-(SFImage *)selectedImage;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFImage, NSDictionary, NSData, NSString;

@interface SFButton : NSObject <SFButton, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	BOOL _isSelected;
	SFImage* _image;
	SFImage* _selectedImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SFImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) SFImage * selectedImage;                                //@synthesize selectedImage=_selectedImage - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                                        //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(SFImage *)image;
-(void)setImage:(SFImage *)arg1 ;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(void)setSelectedImage:(SFImage *)arg1 ;
-(SFImage *)selectedImage;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(BOOL)hasIsSelected;
@end

