/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKRequestPerformingProtocol.h>

@class CATTaskClient, NSString;

@interface CRKTaskClientBackedRequestPerformer : NSObject <CRKRequestPerformingProtocol> {

	CATTaskClient* _taskClient;

}

@property (nonatomic,readonly) CATTaskClient * taskClient;              //@synthesize taskClient=_taskClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CATTaskClient *)taskClient;
-(id)operationForRequest:(id)arg1 ;
-(id)initWithTaskClient:(id)arg1 ;
@end

