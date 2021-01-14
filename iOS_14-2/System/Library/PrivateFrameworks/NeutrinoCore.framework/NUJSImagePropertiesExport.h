/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NSDictionary, NSString, NUJSDepthProperties, NUJSRAWImageProperties;


@protocol NUJSImagePropertiesExport <JSExport>
@property (readonly) NSDictionary * metadata; 
@property (readonly) NSString * fileUTI; 
@property (readonly) NUJSDepthProperties * depthProperties; 
@property (readonly) NUJSRAWImageProperties * rawImageProperties; 
@required
-(NSString *)fileUTI;
-(NSDictionary *)metadata;
-(NUJSDepthProperties *)depthProperties;
-(NUJSRAWImageProperties *)rawImageProperties;

@end

