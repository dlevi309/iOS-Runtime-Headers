/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxSample : NSObject {

	FxSamplePriv* _priv;

}
+(id)_requiredSamplesForSamples:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)context;
-(double)time;
-(void)setContext:(id)arg1 ;
-(void)setTime:(double)arg1 ;
-(id)stream;
-(void)setStream:(id)arg1 ;
-(id)regionOfInterest;
-(void)setRegionOfInterest:(id)arg1 ;
-(unsigned long long)fieldOrder;
-(id)evaluateWithOptions:(id)arg1 ;
-(id)domainOfDefinition;
-(BOOL)supportsContextType:(int)arg1 ;
-(BOOL)isPredetermined;
-(id)requiredSamples;
@end

