/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExtensionFoundation.framework/ExtensionFoundation
*/

@class NSString, NSDictionary;


@protocol EXExtensionPoint <NSObject>
@property (readonly) NSString * identifier; 
@property (readonly) NSDictionary * SDKDictionary; 
@property (readonly) unsigned platform; 
@required
-(unsigned)platform;
-(NSDictionary *)SDKDictionary;
-(NSString *)identifier;

@end

