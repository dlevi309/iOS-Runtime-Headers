/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

@class NSString, NSNumber;


@protocol ABCConfigurationProtocol <NSObject>
@property (nonatomic,readonly) NSString * logArchivePath; 
@property (nonatomic,readonly) unsigned logArchiveUID; 
@property (nonatomic,readonly) unsigned logArchiveGID; 
@property (nonatomic,readonly) BOOL autoBugCaptureEnabled; 
@property (nonatomic,readonly) BOOL autoFeedbackAssistantEnable; 
@property (nonatomic,readonly) BOOL autoBugCaptureAvailable; 
@property (nonatomic,readonly) BOOL autoBugCaptureSignature; 
@property (nonatomic,readonly) BOOL autoBugCaptureRegularPayloads; 
@property (nonatomic,readonly) BOOL autoBugCaptureSensitivePayloads; 
@property (nonatomic,readonly) BOOL autoBugCaptureUploadPreapproved; 
@property (nonatomic,readonly) NSNumber * disable_internal_build; 
@property (nonatomic,readonly) NSNumber * carrier_seed_flag; 
@property (nonatomic,readonly) NSNumber * seed_flag; 
@property (nonatomic,readonly) NSNumber * vendor_flag; 
@property (nonatomic,readonly) NSNumber * npi_flag; 
@required
-(BOOL)autoFeedbackAssistantEnable;
-(BOOL)autoBugCaptureEnabled;
-(BOOL)autoBugCaptureAvailable;
-(BOOL)autoBugCaptureUploadPreapproved;
-(NSString *)logArchivePath;
-(unsigned)logArchiveUID;
-(unsigned)logArchiveGID;
-(BOOL)autoBugCaptureSignature;
-(BOOL)autoBugCaptureRegularPayloads;
-(BOOL)autoBugCaptureSensitivePayloads;
-(NSNumber *)disable_internal_build;
-(NSNumber *)carrier_seed_flag;
-(NSNumber *)seed_flag;
-(NSNumber *)vendor_flag;
-(NSNumber *)npi_flag;

@end

