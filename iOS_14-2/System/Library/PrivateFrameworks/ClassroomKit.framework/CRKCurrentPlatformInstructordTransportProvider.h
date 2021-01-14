/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKTransportProviding.h>

@protocol CRKTransportProviding;
@class NSURL, NSString;

@interface CRKCurrentPlatformInstructordTransportProvider : NSObject <CRKTransportProviding> {

	id<CRKTransportProviding> mBaseProvider;
	NSURL* _classroomAppBundleURL;

}

@property (nonatomic,retain) NSURL * classroomAppBundleURL;              //@synthesize classroomAppBundleURL=_classroomAppBundleURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)fetchTransportWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg1 ;
-(id)initWithStudentDaemonProxy:(id)arg1 classroomAppBundleURL:(id)arg2 ;
-(id)makeProviderForCurrentPlatformWithStudentDaemonProxy:(id)arg1 ;
-(NSURL *)classroomAppBundleURL;
-(void)setClassroomAppBundleURL:(NSURL *)arg1 ;
@end

