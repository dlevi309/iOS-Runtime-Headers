/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKConfigurationSource.h>

@protocol OS_dispatch_queue, CRKConfigurationSource;
@class NSObject, CRKNonCatalystStudentDaemonProxy, NSString;

@interface CRKStudentdXPCProfileConfigurationSource : NSObject <CRKConfigurationSource> {

	NSObject*<OS_dispatch_queue> mCallbackQueue;
	id<CRKConfigurationSource> mPlaceholderFileConfigurationSource;
	CRKNonCatalystStudentDaemonProxy* _studentDaemonProxy;

}

@property (nonatomic,readonly) CRKNonCatalystStudentDaemonProxy * studentDaemonProxy;              //@synthesize studentDaemonProxy=_studentDaemonProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCallbackQueue:(id)arg1 ;
-(void)fetchConfiguration:(/*^block*/id)arg1 ;
-(BOOL)isStudentdInstalled;
-(CRKNonCatalystStudentDaemonProxy *)studentDaemonProxy;
-(void)setConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

