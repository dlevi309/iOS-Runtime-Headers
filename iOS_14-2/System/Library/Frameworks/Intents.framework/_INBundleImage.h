/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INImage.h>

@class NSString, INImageBundle;

@interface _INBundleImage : INImage {

	NSString* _imageName;
	INImageBundle* _imageBundle;

}

@property (nonatomic,copy) NSString * imageName;                     //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) INImageBundle * imageBundle;              //@synthesize imageBundle=_imageBundle - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)_setName:(id)arg1 ;
-(id)initWithStringRepresentation:(id)arg1 ;
-(id)stringRepresentation;
-(id)_bundlePath;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_dictionaryRepresentation;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(INImageBundle *)imageBundle;
-(void)setImageBundle:(INImageBundle *)arg1 ;
-(id)_bundleIdentifier;
-(id)_name;
-(BOOL)_requiresRetrieval;
-(id)_copyWithSubclass:(Class)arg1 ;
-(id)_identifier;
-(BOOL)_isSystem;
-(void)_setBundlePath:(id)arg1 ;
-(id)_initWithURLRepresentation:(id)arg1 ;
-(void)_setBundleIdentifier:(id)arg1 ;
-(id)_URLRepresentation;
-(id)initWithCoder:(id)arg1 ;
@end

