/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_identifier;
-(id)_bundleIdentifier;
-(id)stringRepresentation;
-(BOOL)_requiresRetrieval;
-(id)_dictionaryRepresentation;
-(id)_bundlePath;
-(void)_setName:(id)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(id)_copyWithSubclass:(Class)arg1 ;
-(void)_setBundlePath:(id)arg1 ;
-(id)_initWithURLRepresentation:(id)arg1 ;
-(void)_setBundleIdentifier:(id)arg1 ;
-(id)_URLRepresentation;
-(void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithStringRepresentation:(id)arg1 ;
-(INImageBundle *)imageBundle;
-(void)setImageBundle:(INImageBundle *)arg1 ;
@end

