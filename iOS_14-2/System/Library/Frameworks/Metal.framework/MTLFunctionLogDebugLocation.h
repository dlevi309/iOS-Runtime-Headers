/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

@class NSString, NSURL;


@protocol MTLFunctionLogDebugLocation <NSObject>
@property (nonatomic,readonly) NSString * functionName; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) unsigned long long line; 
@property (nonatomic,readonly) unsigned long long column; 
@required
-(unsigned long long)column;
-(NSString *)functionName;
-(NSURL *)URL;
-(unsigned long long)line;

@end

