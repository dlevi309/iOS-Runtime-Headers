/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INImageLoading.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol INPortableImageLoaderHelping;
@class NSString;

@interface INPortableImageLoader : NSObject <INImageLoading, NSSecureCoding> {

	NSString* _helperClassName;
	id<INPortableImageLoaderHelping> _helper;

}

@property (setter=_setHelperClassName:,nonatomic,copy) NSString * _helperClassName;              //@synthesize helperClassName=_helperClassName - In the implementation block
@property (nonatomic,copy) id<INPortableImageLoaderHelping> helper;                              //@synthesize helper=_helper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) unsigned long long servicePriority; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<INPortableImageLoaderHelping>)helper;
-(NSString *)serviceIdentifier;
-(unsigned long long)servicePriority;
-(BOOL)canLoadImageDataForImage:(id)arg1 ;
-(void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(SCD_Struct_IN1)arg3 completion:(/*^block*/id)arg4 ;
-(NSString *)_helperClassName;
-(void)setHelper:(id<INPortableImageLoaderHelping>)arg1 ;
-(void)loadImageDataFromImage:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setHelperClassName:(id)arg1 ;
@end

