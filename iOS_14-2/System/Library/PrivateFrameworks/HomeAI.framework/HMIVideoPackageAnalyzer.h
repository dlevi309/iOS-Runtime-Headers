/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoProcessingNode.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIVideoPackageAnalyzerDelegate;
@class NSString;

@interface HMIVideoPackageAnalyzer : HMIVideoProcessingNode <HMFLogging> {

	id<HMIVideoPackageAnalyzerDelegate> _delegate;

}

@property (__weak) id<HMIVideoPackageAnalyzerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(id<HMIVideoPackageAnalyzerDelegate>)delegate;
-(void)setDelegate:(id<HMIVideoPackageAnalyzerDelegate>)arg1 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

