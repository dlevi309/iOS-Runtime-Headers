/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISScalableCompositorResource.h>

@class NSString, NSURL, NSDictionary;

@interface ISBundle : NSObject <ISScalableCompositorResource> {

	CFBundleRef _bundle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) CFBundleRef bundle;                                //@synthesize bundle=_bundle - In the implementation block
@property (copy,readonly) NSURL * bundleURL; 
@property (copy,readonly) NSURL * assetCatalogURL; 
@property (copy,readonly) NSDictionary * iconDictionary; 
+(id)iconsetResourceBundle;
+(id)iconsetResourceAssetsCatalogURL;
+(id)frameworkLocalizedString:(id)arg1 ;
+(id)frameworkBundle;
+(id)mainBundle;
-(CFBundleRef)bundle;
-(void)setBundle:(CFBundleRef)arg1 ;
-(NSURL *)bundleURL;
-(NSDictionary *)iconDictionary;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 ;
-(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 ;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(NSURL *)assetCatalogURL;
-(id)compositorResource;
-(id)initWithCFBundle:(CFBundleRef)arg1 ;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(void)dealloc;
@end

