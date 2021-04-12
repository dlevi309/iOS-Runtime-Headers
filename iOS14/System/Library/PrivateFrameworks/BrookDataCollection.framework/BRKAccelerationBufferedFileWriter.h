/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrookDataCollection.framework/BrookDataCollection
*/

#import <BrookDataCollection/BRKWriter.h>
#import <libobjc.A.dylib/BRKAccelerationWriter.h>

@class NSMutableArray, NSString;

@interface BRKAccelerationBufferedFileWriter : BRKWriter <BRKAccelerationWriter> {

	NSMutableArray* _values;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)_lock_close;
-(void)_lock_writeX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4 ;
-(void)writeX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4 ;
@end

