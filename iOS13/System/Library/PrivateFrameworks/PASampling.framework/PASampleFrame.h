/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class NSMutableSet, NSString, NSSet;

@interface PASampleFrame : NSObject <PASerializable> {

	PASampleFrame* _parentFrame;
	NSMutableSet* _childFrames;
	unsigned long long _address;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak,readonly) PASampleFrame * parentFrame;                   //@synthesize parentFrame=_parentFrame - In the implementation block
@property (readonly) NSSet * childFrames;                                  //@synthesize childFrames=_childFrames - In the implementation block
@property (assign) unsigned long long address;                             //@synthesize address=_address - In the implementation block
@property (readonly) unsigned long long symbolicationAddress; 
@property (readonly) BOOL isKernel; 
@property (readonly) BOOL isRootFrame; 
@property (readonly) BOOL isTruncatedBacktraceFrame; 
+(id)addStack:(id)arg1 toSetOfRootFrames:(id)arg2 ;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(id)_newSampleFrameFromSerializedSampleFrame:(const SCD_Struct_PA15*)arg1 ;
+(id)newSampleFrameWithStackFrame:(pa_stack_frame*)arg1 andParent:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(unsigned long long)address;
-(NSSet *)childFrames;
-(id)initWithAddress:(unsigned long long)arg1 ;
-(void)setAddress:(unsigned long long)arg1 ;
-(PASampleFrame *)parentFrame;
-(BOOL)isKernel;
-(id)copyWithNewParent:(id)arg1 ;
-(void)_addChildFrame:(id)arg1 ;
-(BOOL)isTruncatedBacktraceFrame;
-(BOOL)isRootFrame;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)_initWithSerializedSampleFrame:(const SCD_Struct_PA15*)arg1 ;
-(unsigned long long)symbolicationAddress;
-(id)initWithStackFrame:(pa_stack_frame*)arg1 andParent:(id)arg2 ;
-(id)initWithSampleFrame:(id)arg1 andParent:(id)arg2 ;
-(void)querySymbolInformationForSelfAndChildrenUsingTask:(id)arg1 andKernelTask:(id)arg2 andSampleTimeSeriesDataStore:(id)arg3 ;
-(BOOL)correspondsToStackshotFrame:(pa_stack_frame*)arg1 ;
@end

