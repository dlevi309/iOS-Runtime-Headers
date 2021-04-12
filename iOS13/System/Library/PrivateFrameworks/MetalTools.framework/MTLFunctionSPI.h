/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

@class NSString, MTLType, NSArray;


@protocol MTLFunctionSPI <MTLFunction>
@property (copy,readonly) NSString * filePath; 
@property (readonly) long long lineNumber; 
@property (copy,readonly) NSString * unpackedFilePath; 
@property (readonly) unsigned long long renderTargetArrayIndexType; 
@property (readonly) MTLType * returnType; 
@property (readonly) NSArray * arguments; 
@required
-(NSArray *)arguments;
-(long long)lineNumber;
-(MTLType *)returnType;
-(NSString *)filePath;
-(const SCD_Struct_MT16*)bitCodeHash;
-(id)reflectionWithOptions:(unsigned long long)arg1;
-(void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(id)bitcodeData;
-(id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;
-(NSString *)unpackedFilePath;
-(unsigned long long)renderTargetArrayIndexType;

@end

