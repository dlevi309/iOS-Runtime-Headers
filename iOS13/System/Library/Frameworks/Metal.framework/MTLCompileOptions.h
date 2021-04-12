/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface MTLCompileOptions : NSObject <NSCopying>

@property (assign,nonatomic) BOOL tracingEnabled; 
@property (assign,nonatomic) BOOL glBufferBindPoints; 
@property (assign,nonatomic) BOOL debuggingEnabled; 
@property (assign,nonatomic) BOOL compileTimeStatisticsEnabled; 
@property (assign,nonatomic) NSString * additionalCompilerArguments; 
@property (assign,nonatomic) unsigned char sourceLanguage; 
@property (nonatomic,copy) NSDictionary * preprocessorMacros; 
@property (assign,nonatomic) BOOL fastMathEnabled; 
@property (assign,nonatomic) unsigned long long languageVersion; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

