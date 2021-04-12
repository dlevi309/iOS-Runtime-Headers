/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSDictionary;

@interface BWDeferredProcessingSourceNode : BWSourceNode {

	NSMutableDictionary* _outputsByPortType;
	NSObject*<OS_dispatch_queue> _emitSamplesDispatchQueue;
	BOOL _running;

}

@property (nonatomic,readonly) NSDictionary * outputsByPortType;              //@synthesize outputsByPortType=_outputsByPortType - In the implementation block
+(void)initialize;
-(void)dealloc;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(id)outputForPortType:(id)arg1 ;
-(id)initWithPortTypes:(id)arg1 attributes:(id)arg2 ;
-(id)portTypeForOutput:(id)arg1 ;
-(void)processBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(NSDictionary *)outputsByPortType;
@end

