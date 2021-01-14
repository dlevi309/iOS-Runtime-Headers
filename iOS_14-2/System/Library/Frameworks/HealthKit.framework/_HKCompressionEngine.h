/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol _HKStreamingDestination;
#import <HealthKit/HealthKit-Structs.h>
@class NSMutableData;

@interface _HKCompressionEngine : NSObject {

	int _operation;
	int _algorithm;
	NSMutableData* _sinkContent;
	id<_HKStreamingDestination> _destination;
	NSMutableData* _destinationBuffer;
	SCD_Struct_HK24* _stream;

}

@property (assign,nonatomic) int operation;                                               //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) int algorithm;                                               //@synthesize algorithm=_algorithm - In the implementation block
@property (assign,nonatomic,__weak) id<_HKStreamingDestination> destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) NSMutableData * destinationBuffer;                           //@synthesize destinationBuffer=_destinationBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_HK24* stream;                                     //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) NSMutableData * sinkContent;                               //@synthesize sinkContent=_sinkContent - In the implementation block
+(id)processDataWithFunction:(long long)arg1 algorithm:(long long)arg2 content:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(SCD_Struct_HK24*)stream;
-(int)algorithm;
-(void)setDestination:(id<_HKStreamingDestination>)arg1 ;
-(void)setStream:(SCD_Struct_HK24*)arg1 ;
-(void)setAlgorithm:(int)arg1 ;
-(void)setOperation:(int)arg1 ;
-(int)operation;
-(id)initWithFunction:(long long)arg1 algorithm:(long long)arg2 destination:(id)arg3 ;
-(void)sourceContentFinished;
-(void)writeSourceContent:(id)arg1 ;
-(BOOL)_processIncomingData:(const void*)arg1 length:(unsigned long long)arg2 flags:(int)arg3 ;
-(NSMutableData *)sinkContent;
-(void)_decodeEngineFunction:(long long)arg1 algorithm:(long long)arg2 ;
-(BOOL)_initializeStream;
-(void)_gatherReadSinkContent:(id)arg1 ;
-(unsigned long long)_deliverDestinationContent;
-(NSMutableData *)destinationBuffer;
-(void)setDestinationBuffer:(NSMutableData *)arg1 ;
-(id<_HKStreamingDestination>)destination;
-(void)dealloc;
@end

