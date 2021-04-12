/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class VNFaceAttributeCategory;

@interface VNFaceAttributes : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding> {

	VNFaceAttributeCategory* _ageCategory;
	VNFaceAttributeCategory* _genderCategory;
	VNFaceAttributeCategory* _eyesCategory;
	VNFaceAttributeCategory* _smilingCategory;
	VNFaceAttributeCategory* _faceHairCategory;
	VNFaceAttributeCategory* _hairColorCategory;
	VNFaceAttributeCategory* _baldCategory;
	VNFaceAttributeCategory* _glassesCategory;
	VNFaceAttributeCategory* _makeupCategory;
	VNFaceAttributeCategory* _makeupEyesCategory;
	VNFaceAttributeCategory* _makeupLipsCategory;
	unsigned long long _requestRevision;

}

@property (retain) VNFaceAttributeCategory * ageCategory;                       //@synthesize ageCategory=_ageCategory - In the implementation block
@property (retain) VNFaceAttributeCategory * genderCategory;                    //@synthesize genderCategory=_genderCategory - In the implementation block
@property (retain) VNFaceAttributeCategory * eyesCategory;                      //@synthesize eyesCategory=_eyesCategory - In the implementation block
@property (retain) VNFaceAttributeCategory * smilingCategory;                   //@synthesize smilingCategory=_smilingCategory - In the implementation block
@property (retain) VNFaceAttributeCategory * faceHairCategory;                  //@synthesize faceHairCategory=_faceHairCategory - In the implementation block
@property (retain) VNFaceAttributeCategory * hairColorCategory;                 //@synthesize hairColorCategory=_hairColorCategory - In the implementation block
@property (retain) VNFaceAttributeCategory * baldCategory;                      //@synthesize baldCategory=_baldCategory - In the implementation block
@property (retain) VNFaceAttributeCategory * glassesCategory;                   //@synthesize glassesCategory=_glassesCategory - In the implementation block
@property (retain) VNFaceAttributeCategory * makeupCategory;                    //@synthesize makeupCategory=_makeupCategory - In the implementation block
@property (retain) VNFaceAttributeCategory * makeupEyesCategory;                //@synthesize makeupEyesCategory=_makeupEyesCategory - In the implementation block
@property (retain) VNFaceAttributeCategory * makeupLipsCategory;                //@synthesize makeupLipsCategory=_makeupLipsCategory - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision;              //@synthesize requestRevision=_requestRevision - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)requestRevision;
-(VNFaceAttributeCategory *)smilingCategory;
-(VNFaceAttributeCategory *)eyesCategory;
-(id)initWithRequestRevision:(unsigned long long)arg1 ;
-(VNFaceAttributeCategory *)ageCategory;
-(void)setAgeCategory:(VNFaceAttributeCategory *)arg1 ;
-(VNFaceAttributeCategory *)genderCategory;
-(void)setGenderCategory:(VNFaceAttributeCategory *)arg1 ;
-(void)setEyesCategory:(VNFaceAttributeCategory *)arg1 ;
-(void)setSmilingCategory:(VNFaceAttributeCategory *)arg1 ;
-(VNFaceAttributeCategory *)faceHairCategory;
-(void)setFaceHairCategory:(VNFaceAttributeCategory *)arg1 ;
-(VNFaceAttributeCategory *)hairColorCategory;
-(void)setHairColorCategory:(VNFaceAttributeCategory *)arg1 ;
-(VNFaceAttributeCategory *)baldCategory;
-(void)setBaldCategory:(VNFaceAttributeCategory *)arg1 ;
-(VNFaceAttributeCategory *)glassesCategory;
-(void)setGlassesCategory:(VNFaceAttributeCategory *)arg1 ;
-(VNFaceAttributeCategory *)makeupCategory;
-(void)setMakeupCategory:(VNFaceAttributeCategory *)arg1 ;
-(VNFaceAttributeCategory *)makeupEyesCategory;
-(void)setMakeupEyesCategory:(VNFaceAttributeCategory *)arg1 ;
-(VNFaceAttributeCategory *)makeupLipsCategory;
-(void)setMakeupLipsCategory:(VNFaceAttributeCategory *)arg1 ;
@end

