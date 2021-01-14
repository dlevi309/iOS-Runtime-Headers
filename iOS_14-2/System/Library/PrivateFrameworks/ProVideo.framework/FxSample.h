/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxSample : NSObject {

	FxSamplePriv* _priv;

}
+(id)_requiredSamplesForSamples:(id)arg1 ;
-(id)stream;
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)setStream:(id)arg1 ;
-(id)init;
-(id)regionOfInterest;
-(id)context;
-(void)setRegionOfInterest:(id)arg1 ;
-(void)dealloc;
-(void)setContext:(id)arg1 ;
-(unsigned long long)fieldOrder;
-(id)evaluateWithOptions:(id)arg1 ;
-(id)domainOfDefinition;
-(BOOL)supportsContextType:(int)arg1 ;
-(BOOL)isPredetermined;
-(id)requiredSamples;
@end

