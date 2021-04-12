/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <libobjc.A.dylib/VNOperationPointsProviding.h>

@class _VNImageAnalyzerMultiDetectorSceneOperationPointsCache;

@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsProvider : NSObject <VNOperationPointsProviding> {

	_VNImageAnalyzerMultiDetectorSceneOperationPointsCache* _operationPointsCache;
	unsigned long long _requestRevision;

}
-(id)operationPointsAndReturnError:(id*)arg1 ;
-(id)initWithOperationPointsCache:(id)arg1 requestRevision:(unsigned long long)arg2 ;
@end

