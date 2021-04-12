/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDictionary *)metadata;
-(id<NUImageProperties>)imageProperties;
-(NSString *)fileUTI;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(NUJSDepthProperties *)depthProperties;
-(NUJSRAWImageProperties *)rawImageProperties;
-(id)initWithImageProperties:(id)arg1 context:(id)arg2 ;
@end

