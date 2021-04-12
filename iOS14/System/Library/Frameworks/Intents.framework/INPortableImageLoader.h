/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INImageLoading.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol INPortableImageLoaderHelping;
@class NSString;

@interface INPortableImageLoader : NSObject <INImageLoading, NSSecureCoding> {

	id<INPortableImageLoaderHelping> _helper;

}

@property (nonatomic,copy,readonly) id<INPortableImageLoaderHelping> helper;              //@synthesize helper=_helper - In the implementation block
@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) unsigned long long servicePriority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id<INPortableImageLoaderHelping>)helper;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_helperClassName;
-(void)loadImageDataFromImage:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)canLoadImageDataForImage:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)servicePriority;
-(void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(SCD_Struct_IN4)arg3 completion:(/*^block*/id)arg4 ;
@end

