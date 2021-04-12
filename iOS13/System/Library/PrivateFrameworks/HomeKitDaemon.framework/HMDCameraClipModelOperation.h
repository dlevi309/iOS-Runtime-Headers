/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraRecordingUploaderDataSource;
@class NSString, NSUUID, HMBLocalZone, HMCameraClipEncryptionManager, HMDCameraRecordingUploadOperationEvent, NSDate, NSArray;

@interface HMDCameraClipModelOperation : HMFOperation <HMFObject, HMFLogging> {

	NSString* _logIdentifier;
	NSUUID* _clipModelID;
	HMBLocalZone* _localZone;
	HMCameraClipEncryptionManager* _encryptionManager;
	HMDCameraRecordingUploadOperationEvent* _uploadOperationEvent;
	NSDate* _createDate;
	NSDate* _startDate;
	NSDate* _endDate;
	id<HMDCameraRecordingUploaderDataSource> _dataSource;

}

@property (copy,readonly) NSString * logIdentifier;                                              //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) NSDate * createDate;                                                        //@synthesize createDate=_createDate - In the implementation block
@property (retain) NSDate * startDate;                                                           //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                                             //@synthesize endDate=_endDate - In the implementation block
@property (readonly) id<HMDCameraRecordingUploaderDataSource> dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) NSUUID * clipModelID;                                                       //@synthesize clipModelID=_clipModelID - In the implementation block
@property (readonly) HMBLocalZone * localZone;                                                   //@synthesize localZone=_localZone - In the implementation block
@property (readonly) double runTime; 
@property (retain) HMCameraClipEncryptionManager * encryptionManager;                            //@synthesize encryptionManager=_encryptionManager - In the implementation block
@property (readonly) HMDCameraRecordingUploadOperationEvent * uploadOperationEvent;              //@synthesize uploadOperationEvent=_uploadOperationEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)shortDescription;
+(id)logCategory;
+(double)clipModelOperationTimeout;
-(NSString *)description;
-(void)main;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)finish;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id<HMDCameraRecordingUploaderDataSource>)dataSource;
-(NSString *)shortDescription;
-(void)cancelWithError:(id)arg1 ;
-(double)runTime;
-(NSString *)privateDescription;
-(NSString *)logIdentifier;
-(NSArray *)attributeDescriptions;
-(NSDate *)createDate;
-(HMBLocalZone *)localZone;
-(NSUUID *)clipModelID;
-(void)_markEndDateAndSubmitUploadOperationEvent;
-(HMDCameraRecordingUploadOperationEvent *)uploadOperationEvent;
-(id)updateClipModel:(id)arg1 shouldPerformDelegateCallbacks:(BOOL)arg2 ;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 encryptionManager:(id)arg3 dataSource:(id)arg4 ;
-(id)fetchClipModel;
-(id)updateClipModel:(id)arg1 ;
-(HMCameraClipEncryptionManager *)encryptionManager;
-(void)setEncryptionManager:(HMCameraClipEncryptionManager *)arg1 ;
@end

