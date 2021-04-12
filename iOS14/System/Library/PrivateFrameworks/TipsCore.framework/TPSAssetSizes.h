/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSSerializableObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TPSSizes;

@interface TPSAssetSizes : TPSSerializableObject <NSCopying, NSSecureCoding> {

	TPSSizes* _tip;
	TPSSizes* _tipIntro;
	TPSSizes* _collectionFeatured;

}

@property (nonatomic,retain) TPSSizes * tip;                             //@synthesize tip=_tip - In the implementation block
@property (nonatomic,retain) TPSSizes * tipIntro;                        //@synthesize tipIntro=_tipIntro - In the implementation block
@property (nonatomic,retain) TPSSizes * collectionFeatured;              //@synthesize collectionFeatured=_collectionFeatured - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTip:(TPSSizes *)arg1 ;
-(void)setTipIntro:(TPSSizes *)arg1 ;
-(TPSSizes *)collectionFeatured;
-(void)setCollectionFeatured:(TPSSizes *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TPSSizes *)tipIntro;
-(TPSSizes *)tip;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

