/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKTransportProviding.h>

@protocol CRKRequestPerformingProtocol;
@class NSURL, NSString;

@interface CRKStudentdBackedInstructordTransportProvider : NSObject <CRKTransportProviding> {

	id<CRKRequestPerformingProtocol> _studentDaemonProxy;
	NSURL* _classroomAppBundleURL;

}

@property (nonatomic,retain) id<CRKRequestPerformingProtocol> studentDaemonProxy;              //@synthesize studentDaemonProxy=_studentDaemonProxy - In the implementation block
@property (nonatomic,retain) NSURL * classroomAppBundleURL;                                    //@synthesize classroomAppBundleURL=_classroomAppBundleURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CRKRequestPerformingProtocol>)studentDaemonProxy;
-(void)fetchTransportWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg1 classroomAppBundleURL:(id)arg2 ;
-(NSURL *)classroomAppBundleURL;
-(void)setClassroomAppBundleURL:(NSURL *)arg1 ;
-(void)fetchTransportOperationDidFinish:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setStudentDaemonProxy:(id<CRKRequestPerformingProtocol>)arg1 ;
@end

