/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject, NSMutableArray;

@interface BWMetadataTimeMachine : NSObject {

	int _capacity;
	NSObject*<OS_dispatch_queue> _metadataHandlingQueue;
	NSMutableArray* _metadata;
	NSMutableArray* _requests;
	SCD_Struct_BW8 _earliestAllowedPTS;

}

@property (assign) SCD_Struct_BW8 earliestAllowedPTS; 
+(void)initialize;
-(id)_metadataForPTSRange:(SCD_Struct_BW39)arg1 ;
-(id)initWithCapacity:(int)arg1 metadataHandlingPriority:(unsigned)arg2 ;
-(void)addMetadata:(id)arg1 ;
-(id)metadataForPTSRange:(SCD_Struct_BW39)arg1 timeout:(float)arg2 ;
-(BOOL)waitUntilCapacity:(int)arg1 timeout:(float)arg2 ;
-(SCD_Struct_BW8)earliestAllowedPTS;
-(void)setEarliestAllowedPTS:(SCD_Struct_BW8)arg1 ;
-(void)reset;
-(void)dealloc;
@end

