/*
* Generated on Thursday, January 14, 2021 at 2:27:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
*/

#import <libobjc.A.dylib/MTLFunctionLog.h>

@protocol MTLFunctionLogDebugLocation, MTLFunction, MTLBuffer;
@class NSString, MTLArgument, NSArray;

@interface MTLBufferErrorLog : NSObject <MTLFunctionLog> {

	id<MTLFunctionLogDebugLocation> _debugLocation;
	NSString* _encoderLabel;
	id<MTLFunction> _function;
	unsigned long long _type;
	MTLArgument* _argument;
	unsigned long long _addressSpace;
	id<MTLBuffer> _buffer;
	unsigned long long _encoderMethodIdentifier;
	unsigned long long _offset;
	unsigned long long _operation;
	NSArray* _errorStackTrace;

}

@property (assign,nonatomic) unsigned long long encoderMethodIdentifier;                   //@synthesize encoderMethodIdentifier=_encoderMethodIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long addressSpace;                            //@synthesize addressSpace=_addressSpace - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> buffer;                                       //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                                  //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long operation;                               //@synthesize operation=_operation - In the implementation block
@property (nonatomic,readonly) NSArray * errorStackTrace;                                  //@synthesize errorStackTrace=_errorStackTrace - In the implementation block
@property (nonatomic,readonly) MTLArgument * argument;                                     //@synthesize argument=_argument - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * encoderLabel;                                    //@synthesize encoderLabel=_encoderLabel - In the implementation block
@property (nonatomic,readonly) id<MTLFunction> function;                                   //@synthesize function=_function - In the implementation block
@property (nonatomic,readonly) id<MTLFunctionLogDebugLocation> debugLocation;              //@synthesize debugLocation=_debugLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MTLArgument *)argument;
-(unsigned long long)operation;
-(id<MTLFunction>)function;
-(unsigned long long)offset;
-(NSString *)description;
-(id<MTLBuffer>)buffer;
-(unsigned long long)type;
-(void)dealloc;
-(id<MTLFunctionLogDebugLocation>)debugLocation;
-(NSString *)encoderLabel;
-(unsigned long long)encoderMethodIdentifier;
-(void)setEncoderMethodIdentifier:(unsigned long long)arg1 ;
-(NSArray *)errorStackTrace;
-(id)initWithType:(unsigned long long)arg1 function:(id)arg2 encoderLabel:(id)arg3 addressSpace:(unsigned long long)arg4 buffer:(id)arg5 offset:(unsigned long long)arg6 operation:(unsigned long long)arg7 stackTrace:(id)arg8 argument:(id)arg9 ;
-(unsigned long long)addressSpace;
@end

