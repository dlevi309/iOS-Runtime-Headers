/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUSubjectDetectionResult.h>

@class NSArray, NSString;

@interface _NUSubjectDetectionResult : _NURenderResult <NUSubjectDetectionResult> {

	NSArray* _observations;

}

@property (nonatomic,copy,readonly) NSArray * observations;              //@synthesize observations=_observations - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)observations;
-(id)initWithObservations:(id)arg1 ;
@end

