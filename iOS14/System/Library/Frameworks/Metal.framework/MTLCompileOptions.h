/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSArray;

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
@property (assign,nonatomic) long long libraryType; 
@property (nonatomic,copy) NSString * installName; 
@property (nonatomic,copy) NSArray * libraries; 
@property (assign,nonatomic) BOOL preserveInvariance; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

