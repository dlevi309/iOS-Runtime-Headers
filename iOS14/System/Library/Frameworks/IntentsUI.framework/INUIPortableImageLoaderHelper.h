/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
*/

#import <libobjc.A.dylib/INPortableImageLoaderHelping.h>

@class UITraitCollection, NSString;

@interface INUIPortableImageLoaderHelper : NSObject <INPortableImageLoaderHelping> {

	UITraitCollection* _traitCollection;

}

@property (nonatomic,retain) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)loadImageDataFromBundle:(id)arg1 withImageName:(id)arg2 accessSpecifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)loadImageSizeFromData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

