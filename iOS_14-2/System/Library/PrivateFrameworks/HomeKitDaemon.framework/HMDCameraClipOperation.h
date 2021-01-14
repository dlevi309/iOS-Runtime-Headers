/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraClipOperationDataSource;
@class NSString, NSUUID, HMBLocalZone, HMDCameraRecordingUploadOperationEvent, NSDate, NSArray;

@interface HMDCameraClipOperation : HMFOperation <HMFObject, HMFLogging> {

	NSString* _logIdentifier;
	NSUUID* _clipModelID;
	HMBLocalZone* _localZone;
	HMDCameraRecordingUploadOperationEvent* _uploadOperationEvent;
	NSDate* _creationDate;
	NSDate* _startDate;
	NSDate* _endDate;
	id<HMDCameraClipOperationDataSource> _dataSource;

}

@property (copy,readonly) NSDate * creationDate;                                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (copy,readonly) NSString * logIdentifier;                                              //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) double executionDuration; 
@property (copy) NSDate * startDate;                                                             //@synthesize startDate=_startDate - In the implementation block
@property (copy) NSDate * endDate;                                                               //@synthesize endDate=_endDate - In the implementation block
@property (readonly) id<HMDCameraClipOperationDataSource> dataSource;                            //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) NSUUID * clipModelID;                                                       //@synthesize clipModelID=_clipModelID - In the implementation block
@property (readonly) HMBLocalZone * localZone;                                                   //@synthesize localZone=_localZone - In the implementation block
@property (readonly) HMDCameraRecordingUploadOperationEvent * uploadOperationEvent;              //@synthesize uploadOperationEvent=_uploadOperationEvent - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)shortDescription;
-(NSDate *)endDate;
-(void)finish;
-(NSString *)privateDescription;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)cancelWithError:(id)arg1 ;
-(NSString *)shortDescription;
-(void)setEndDate:(NSDate *)arg1 ;
-(id<HMDCameraClipOperationDataSource>)dataSource;
-(NSString *)logIdentifier;
-(NSString *)description;
-(NSDate *)creationDate;
-(void)main;
-(NSArray *)attributeDescriptions;
-(HMBLocalZone *)localZone;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 dataSource:(id)arg3 ;
-(NSUUID *)clipModelID;
-(void)_markEndDateAndSubmitUploadOperationEvent;
-(double)executionDuration;
-(id)updateClipModel:(id)arg1 shouldPerformDelegateCallbacks:(BOOL)arg2 ;
-(HMDCameraRecordingUploadOperationEvent *)uploadOperationEvent;
-(double)queuedDuration;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 ;
-(id)fetchClipModel;
-(id)updateClipModel:(id)arg1 ;
@end

