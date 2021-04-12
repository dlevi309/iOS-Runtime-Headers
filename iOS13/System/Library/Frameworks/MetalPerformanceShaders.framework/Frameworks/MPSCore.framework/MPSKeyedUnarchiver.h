/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <Foundation/NSKeyedUnarchiver.h>
#import <MPSCore/MPSDeviceProvider.h>

@protocol MTLDevice;
@interface MPSKeyedUnarchiver : NSKeyedUnarchiver <MPSDeviceProvider> {

	id<MTLDevice> _device;

}
+(id)unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
+(id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
+(id)unarchiveObjectWithData:(id)arg1 device:(id)arg2 ;
+(id)unarchiveTopLevelObjectWithData:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
+(id)unarchiveObjectWithFile:(id)arg1 device:(id)arg2 ;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 ;
-(id)initForReadingFromData:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(id)mpsMTLDevice;
-(id)initForReadingWithData:(id)arg1 device:(id)arg2 ;
@end

