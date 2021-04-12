/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSImagePropertiesExport.h>

@class NSDictionary, NSString, NUJSDepthProperties, NUJSRAWImageProperties;

@interface NUJSImageProperties : NUJSProxy <NUJSImagePropertiesExport>

@property (readonly) id<NUImageProperties> imageProperties; 
@property (readonly) NSDictionary * metadata; 
@property (readonly) NSString * fileUTI; 
@property (readonly) NUJSDepthProperties * depthProperties; 
@property (readonly) NUJSRAWImageProperties * rawImageProperties; 
-(NSString *)fileUTI;
-(NSDictionary *)metadata;
-(id<NUImageProperties>)imageProperties;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(NUJSDepthProperties *)depthProperties;
-(NUJSRAWImageProperties *)rawImageProperties;
-(id)initWithImageProperties:(id)arg1 context:(id)arg2 ;
@end

