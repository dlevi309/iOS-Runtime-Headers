/*
* Generated on Monday, March 1, 2021 at 2:34:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
*/

#import <MPSCore/MPSExternalPluginBase.h>

@protocol MPSExternalPluginBase <NSObject>
@required
-(id)device;
-(id)initWithDevice:(id)arg1;
-(unsigned long long)maxBatchSize;

@end


@protocol MTLDevice;
@class NSString;

@interface MPSExternalPluginBase : NSObject <MPSExternalPluginBase> {

	MPSExternalPluginBase* _self;
	id<MTLDevice> _device;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)debugDescription;
-(id)device;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)maxBatchSize;
@end

