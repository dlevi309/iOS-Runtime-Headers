/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMNicknameAvatar.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface IMNicknameAvatarImage : IMNicknameAvatar <NSSecureCoding> {

	NSString* _imageName;
	NSString* _imageFilePath;

}

@property (nonatomic,readonly) BOOL hasImage; 
@property (nonatomic,copy) NSString * imageName;                  //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * imageFilePath;              //@synthesize imageFilePath=_imageFilePath - In the implementation block
@property (nonatomic,readonly) BOOL imageExists; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)hasImage;
-(NSString *)imageFilePath;
-(id)publicDictionaryRepresentation;
-(id)initWithImageName:(id)arg1 imageFilePath:(id)arg2 ;
-(BOOL)imageExists;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(id)description;
-(void)setImageFilePath:(NSString *)arg1 ;
-(id)loadAndReturnImageData;
-(id)initWithpublicDictionaryMetadataRepresentation:(id)arg1 ;
-(id)publicDictionaryMetadataRepresentation;
-(id)imageData;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

