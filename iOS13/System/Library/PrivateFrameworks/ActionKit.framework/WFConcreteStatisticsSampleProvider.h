/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/WFStatisticsSampleProvider.h>

@protocol WFStatisticsSampleProvider;
@class NSArray, NSObject, NSString;

@interface WFConcreteStatisticsSampleProvider : NSProxy <WFStatisticsSampleProvider> {

	NSObject*<WFStatisticsSampleProvider> _sampleProvider;

}

@property (nonatomic,retain) NSObject*<WFStatisticsSampleProvider> sampleProvider;              //@synthesize sampleProvider=_sampleProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canProvideDataSamples; 
@property (nonatomic,readonly) NSArray * dataSamples; 
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithSampleProvider:(id)arg1 ;
-(NSObject*<WFStatisticsSampleProvider>)sampleProvider;
-(void)setSampleProvider:(NSObject*<WFStatisticsSampleProvider>)arg1 ;
@end

