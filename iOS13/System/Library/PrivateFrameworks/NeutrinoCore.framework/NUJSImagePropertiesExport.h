/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

@class NSDictionary, NSString, NUJSDepthProperties, NUJSRAWImageProperties;


@protocol NUJSImagePropertiesExport <JSExport>
@property (readonly) NSDictionary * metadata; 
@property (readonly) NSString * fileUTI; 
@property (readonly) NUJSDepthProperties * depthProperties; 
@property (readonly) NUJSRAWImageProperties * rawImageProperties; 
@required
-(NSDictionary *)metadata;
-(NSString *)fileUTI;
-(NUJSDepthProperties *)depthProperties;
-(NUJSRAWImageProperties *)rawImageProperties;

@end

