/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

@class NSString;


@protocol MTLFunctionLog <NSObject>
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * encoderLabel; 
@property (nonatomic,readonly) id<MTLFunction> function; 
@property (nonatomic,readonly) id<MTLFunctionLogDebugLocation> debugLocation; 
@required
-(id<MTLFunction>)function;
-(unsigned long long)type;
-(id<MTLFunctionLogDebugLocation>)debugLocation;
-(NSString *)encoderLabel;

@end

