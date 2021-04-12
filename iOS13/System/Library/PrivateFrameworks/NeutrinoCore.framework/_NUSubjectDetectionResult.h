/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUSubjectDetectionResult.h>

@class NSArray, NSString;

@interface _NUSubjectDetectionResult : _NURenderResult <NUSubjectDetectionResult> {

	NSArray* _observations;

}

@property (nonatomic,copy,readonly) NSArray * observations;              //@synthesize observations=_observations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(NSArray *)observations;
-(id)initWithObservations:(id)arg1 ;
@end

