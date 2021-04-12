/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class AVCaptureSynchronizedDataCollectionInternal;

@interface AVCaptureSynchronizedDataCollection : NSObject <NSFastEnumeration> {

	AVCaptureSynchronizedDataCollectionInternal* _internal;

}

@property (readonly) unsigned long long count; 
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AV9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)_shortStringForDataOutput:(id)arg1 syncedData:(id)arg2 ;
-(id)_shortStringForDataDroppedReason:(long long)arg1 ;
-(id)synchronizedDataForCaptureOutput:(id)arg1 ;
-(id)_initWithPossibleDataOutputs:(id)arg1 ;
-(void)_setSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2 ;
@end

