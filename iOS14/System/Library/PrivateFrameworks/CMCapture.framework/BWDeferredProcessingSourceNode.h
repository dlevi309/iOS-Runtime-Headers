/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSourceNode.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSDictionary;

@interface BWDeferredProcessingSourceNode : BWSourceNode {

	NSMutableDictionary* _outputsByPortType;
	NSObject*<OS_dispatch_queue> _emitSamplesDispatchQueue;
	BOOL _running;

}

@property (nonatomic,readonly) NSDictionary * outputsByPortType;              //@synthesize outputsByPortType=_outputsByPortType - In the implementation block
+(void)initialize;
-(BOOL)start:(id*)arg1 ;
-(id)initWithPortTypes:(id)arg1 attributes:(id)arg2 ;
-(void)processBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)portTypeForOutput:(id)arg1 ;
-(NSDictionary *)outputsByPortType;
-(BOOL)stop:(id*)arg1 ;
-(id)outputForPortType:(id)arg1 ;
-(void)dealloc;
@end

