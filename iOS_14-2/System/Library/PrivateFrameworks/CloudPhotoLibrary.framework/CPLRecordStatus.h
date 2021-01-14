/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPLRecordChange, NSString;

@interface CPLRecordStatus : NSObject <NSSecureCoding> {

	SCD_Union_CP7 _status;
	CPLRecordChange* _record;
	unsigned long long _generation;

}

@property (nonatomic,readonly) unsigned long long generation;                              //@synthesize generation=_generation - In the implementation block
@property (assign,getter=isUnknown,nonatomic) BOOL unknown; 
@property (assign,getter=isQuarantined,nonatomic) BOOL quarantined; 
@property (assign,getter=isResetting,nonatomic) BOOL resetting; 
@property (assign,getter=isUploaded,nonatomic) BOOL uploaded; 
@property (assign,getter=isWaitingForUpload,nonatomic) BOOL waitingForUpload; 
@property (assign,getter=isUploading,nonatomic) BOOL uploading; 
@property (assign,getter=isWaitingForUpdate,nonatomic) BOOL waitingForUpdate; 
@property (assign,getter=isUpdating,nonatomic) BOOL updating; 
@property (assign,getter=isConfirmed,nonatomic) BOOL confirmed; 
@property (nonatomic,readonly) CPLRecordChange * record;                                   //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) NSString * statusDescription; 
+(BOOL)supportsSecureCoding;
-(CPLRecordChange *)record;
-(BOOL)isUpdating;
-(unsigned long long)generation;
-(void)setUploaded:(BOOL)arg1 ;
-(BOOL)isUploaded;
-(BOOL)isUploading;
-(void)setUpdating:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUnknown:(BOOL)arg1 ;
-(id)description;
-(BOOL)isConfirmed;
-(BOOL)isResetting;
-(BOOL)isQuarantined;
-(BOOL)isUnknown;
-(id)initWithCoder:(id)arg1 ;
-(void)setUploading:(BOOL)arg1 ;
-(void)setConfirmed:(BOOL)arg1 ;
-(NSString *)statusDescription;
-(void)setQuarantined:(BOOL)arg1 ;
-(void)setResetting:(BOOL)arg1 ;
-(BOOL)isWaitingForUpload;
-(void)setWaitingForUpload:(BOOL)arg1 ;
-(BOOL)isWaitingForUpdate;
-(void)setWaitingForUpdate:(BOOL)arg1 ;
-(id)initWithRecord:(id)arg1 generation:(unsigned long long)arg2 ;
@end

