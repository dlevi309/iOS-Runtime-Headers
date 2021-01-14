/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <Foundation/NSKeyedUnarchiver.h>
#import <MPSCore/MPSDeviceProvider.h>

@protocol MTLDevice;
@interface MPSKeyedUnarchiver : NSKeyedUnarchiver <MPSDeviceProvider> {

	id<MTLDevice> _device;

}
+(id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
+(id)unarchiveObjectWithData:(id)arg1 device:(id)arg2 ;
+(id)unarchiveTopLevelObjectWithData:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
+(id)unarchiveObjectWithFile:(id)arg1 device:(id)arg2 ;
+(id)unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
-(id)initWithDevice:(id)arg1 ;
-(id)mpsMTLDevice;
-(id)initForReadingFromData:(id)arg1 device:(id)arg2 error:(id*)arg3 ;
-(id)initForReadingWithData:(id)arg1 device:(id)arg2 ;
-(void)dealloc;
@end

