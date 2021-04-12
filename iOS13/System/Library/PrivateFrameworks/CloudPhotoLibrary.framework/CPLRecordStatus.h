/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPLRecordChange, NSString;

@interface CPLRecordStatus : NSObject <NSSecureCoding> {

	SCD_Union_CP5 _status;
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)generation;
-(void)setUpdating:(BOOL)arg1 ;
-(BOOL)isUpdating;
-(BOOL)isUploaded;
-(BOOL)isUploading;
-(CPLRecordChange *)record;
-(void)setUploaded:(BOOL)arg1 ;
-(void)setUnknown:(BOOL)arg1 ;
-(BOOL)isUnknown;
-(BOOL)isConfirmed;
-(BOOL)isQuarantined;
-(NSString *)statusDescription;
-(void)setConfirmed:(BOOL)arg1 ;
-(void)setUploading:(BOOL)arg1 ;
-(void)setQuarantined:(BOOL)arg1 ;
-(BOOL)isResetting;
-(void)setResetting:(BOOL)arg1 ;
-(BOOL)isWaitingForUpload;
-(void)setWaitingForUpload:(BOOL)arg1 ;
-(BOOL)isWaitingForUpdate;
-(void)setWaitingForUpdate:(BOOL)arg1 ;
-(id)initWithRecord:(id)arg1 generation:(unsigned long long)arg2 ;
@end

