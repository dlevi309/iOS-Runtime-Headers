/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSMutableArray;

@interface TRIPBFileOptions : TRIPBMessage

@property (nonatomic,copy) NSString * javaPackage; 
@property (assign,nonatomic) BOOL hasJavaPackage; 
@property (nonatomic,copy) NSString * javaOuterClassname; 
@property (assign,nonatomic) BOOL hasJavaOuterClassname; 
@property (assign,nonatomic) BOOL javaMultipleFiles; 
@property (assign,nonatomic) BOOL hasJavaMultipleFiles; 
@property (assign,nonatomic) BOOL javaGenerateEqualsAndHash; 
@property (assign,nonatomic) BOOL hasJavaGenerateEqualsAndHash; 
@property (assign,nonatomic) BOOL javaStringCheckUtf8; 
@property (assign,nonatomic) BOOL hasJavaStringCheckUtf8; 
@property (assign,nonatomic) int optimizeFor; 
@property (assign,nonatomic) BOOL hasOptimizeFor; 
@property (nonatomic,copy) NSString * goPackage; 
@property (assign,nonatomic) BOOL hasGoPackage; 
@property (assign,nonatomic) BOOL ccGenericServices; 
@property (assign,nonatomic) BOOL hasCcGenericServices; 
@property (assign,nonatomic) BOOL javaGenericServices; 
@property (assign,nonatomic) BOOL hasJavaGenericServices; 
@property (assign,nonatomic) BOOL pyGenericServices; 
@property (assign,nonatomic) BOOL hasPyGenericServices; 
@property (assign,nonatomic) BOOL phpGenericServices; 
@property (assign,nonatomic) BOOL hasPhpGenericServices; 
@property (assign,nonatomic) BOOL deprecated; 
@property (assign,nonatomic) BOOL hasDeprecated; 
@property (assign,nonatomic) BOOL ccEnableArenas; 
@property (assign,nonatomic) BOOL hasCcEnableArenas; 
@property (nonatomic,copy) NSString * objcClassPrefix; 
@property (assign,nonatomic) BOOL hasObjcClassPrefix; 
@property (nonatomic,copy) NSString * csharpNamespace; 
@property (assign,nonatomic) BOOL hasCsharpNamespace; 
@property (nonatomic,copy) NSString * swiftPrefix; 
@property (assign,nonatomic) BOOL hasSwiftPrefix; 
@property (nonatomic,copy) NSString * phpClassPrefix; 
@property (assign,nonatomic) BOOL hasPhpClassPrefix; 
@property (nonatomic,copy) NSString * phpNamespace; 
@property (assign,nonatomic) BOOL hasPhpNamespace; 
@property (nonatomic,copy) NSString * phpMetadataNamespace; 
@property (assign,nonatomic) BOOL hasPhpMetadataNamespace; 
@property (nonatomic,copy) NSString * rubyPackage; 
@property (assign,nonatomic) BOOL hasRubyPackage; 
@property (nonatomic,retain) NSMutableArray * uninterpretedOptionArray; 
@property (nonatomic,readonly) unsigned long long uninterpretedOptionArray_Count; 
+(id)descriptor;
@end

