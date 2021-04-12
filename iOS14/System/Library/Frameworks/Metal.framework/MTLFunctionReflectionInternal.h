/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/MTLFunctionReflection.h>

@class NSArray, NSData;

@interface MTLFunctionReflectionInternal : MTLFunctionReflection {

	NSArray* _builtInArguments;
	NSArray* _arguments;
	NSData* _pluginReturnData;

}
-(id)initWithDevice:(id)arg1 reflectionData:(id)arg2 functionType:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
-(id)arguments;
-(id)initWithArguments:(id*)arg1 argumentCount:(unsigned)arg2 builtInArgumentCount:(unsigned)arg3 pluginReturnData:(id)arg4 ;
-(id)builtInArguments;
-(id)pluginReturnData;
-(void)dealloc;
@end

