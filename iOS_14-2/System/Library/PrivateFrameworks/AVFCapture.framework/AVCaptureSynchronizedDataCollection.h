/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVFCapture-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class AVCaptureSynchronizedDataCollectionInternal;

@interface AVCaptureSynchronizedDataCollection : NSObject <NSFastEnumeration> {

	AVCaptureSynchronizedDataCollectionInternal* _internal;

}

@property (readonly) unsigned long long count; 
+(void)initialize;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AV28*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)debugDescription;
-(unsigned long long)count;
-(id)description;
-(id)_shortStringForDataOutput:(id)arg1 syncedData:(id)arg2 ;
-(id)_shortStringForDataDroppedReason:(long long)arg1 ;
-(id)synchronizedDataForCaptureOutput:(id)arg1 ;
-(id)_initWithPossibleDataOutputs:(id)arg1 ;
-(void)_setSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2 ;
-(void)dealloc;
@end

