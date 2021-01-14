/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUSaliencyResult.h>

@class VNSaliencyImageObservation, NSString;

@interface _NUSaliencyResult : _NURenderResult <NUSaliencyResult> {

	VNSaliencyImageObservation* _observation;

}

@property (nonatomic,readonly) VNSaliencyImageObservation * observation;              //@synthesize observation=_observation - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithObservation:(id)arg1 ;
-(VNSaliencyImageObservation *)observation;
@end

