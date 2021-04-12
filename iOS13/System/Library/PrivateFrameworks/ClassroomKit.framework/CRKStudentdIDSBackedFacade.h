/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@protocol CRKRequestPerformingProtocol;
@interface CRKStudentdIDSBackedFacade : NSObject {

	id<CRKRequestPerformingProtocol> _daemonProxy;

}

@property (nonatomic,readonly) id<CRKRequestPerformingProtocol> daemonProxy;              //@synthesize daemonProxy=_daemonProxy - In the implementation block
-(id<CRKRequestPerformingProtocol>)daemonProxy;
-(id)initWithDaemonProxy:(id)arg1 ;
-(id)operationForMessage:(id)arg1 recipients:(id)arg2 ;
@end

