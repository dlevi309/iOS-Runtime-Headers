/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasImage;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(id)imageData;
-(NSString *)imageFilePath;
-(void)setImageFilePath:(NSString *)arg1 ;
-(id)initWithImageName:(id)arg1 imageFilePath:(id)arg2 ;
-(id)publicDictionaryRepresentation;
-(BOOL)imageExists;
-(id)initWithpublicDictionaryMetadataRepresentation:(id)arg1 ;
-(id)publicDictionaryMetadataRepresentation;
-(id)loadAndReturnImageData;
@end

