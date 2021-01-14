/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDate, NSData, CAMCaptureCoordinationInfo, NSError;

@interface CAMVideoLocalPersistenceResult : NSObject <NSSecureCoding> {

	NSURL* _localDestinationURL;
	NSURL* _filteredLocalDestinationURL;
	NSURL* _linkedDestinationURL;
	NSURL* _filteredLinkedDestinationURL;
	NSString* _filteredVideoPreviewPath;
	NSString* _localPersistenceUUID;
	SCD_Struct_CA15 _dimensions;
	NSString* _stillPersistenceUUID;
	NSDate* _creationDate;
	NSData* _adjustmentsData;
	CAMCaptureCoordinationInfo* _coordinationInfo;
	NSError* _error;
	SCD_Struct_CA7 _duration;
	SCD_Struct_CA7 _stillDisplayTime;

}

@property (nonatomic,copy,readonly) NSURL * localDestinationURL;                           //@synthesize localDestinationURL=_localDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * filteredLocalDestinationURL;                   //@synthesize filteredLocalDestinationURL=_filteredLocalDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * linkedDestinationURL;                          //@synthesize linkedDestinationURL=_linkedDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * filteredLinkedDestinationURL;                  //@synthesize filteredLinkedDestinationURL=_filteredLinkedDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * filteredVideoPreviewPath;                   //@synthesize filteredVideoPreviewPath=_filteredVideoPreviewPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * localPersistenceUUID;                       //@synthesize localPersistenceUUID=_localPersistenceUUID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA7 duration;                                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA15 dimensions;                                 //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,copy,readonly) NSString * stillPersistenceUUID;                       //@synthesize stillPersistenceUUID=_stillPersistenceUUID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA7 stillDisplayTime;                            //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                      //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSData * adjustmentsData;                                   //@synthesize adjustmentsData=_adjustmentsData - In the implementation block
@property (nonatomic,readonly) CAMCaptureCoordinationInfo * coordinationInfo;              //@synthesize coordinationInfo=_coordinationInfo - In the implementation block
@property (nonatomic,readonly) NSError * error;                                            //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(SCD_Struct_CA15)dimensions;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)adjustmentsData;
-(NSError *)error;
-(NSDate *)creationDate;
-(NSURL *)localDestinationURL;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CA7)stillDisplayTime;
-(NSURL *)linkedDestinationURL;
-(SCD_Struct_CA7)duration;
-(NSString *)localPersistenceUUID;
-(CAMCaptureCoordinationInfo *)coordinationInfo;
-(NSString *)stillPersistenceUUID;
-(id)initWithURL:(id)arg1 filteredLocalDestinationURL:(id)arg2 linkedURL:(id)arg3 filteredLinkedURL:(id)arg4 videoThumbnailPath:(id)arg5 UUID:(id)arg6 duration:(SCD_Struct_CA7)arg7 dimensions:(SCD_Struct_CA15)arg8 stillPersistenceUUID:(id)arg9 stillDisplayTime:(SCD_Struct_CA7)arg10 creationDate:(id)arg11 adjustmentsData:(id)arg12 coordinationInfo:(id)arg13 error:(id)arg14 ;
-(NSURL *)filteredLocalDestinationURL;
-(NSURL *)filteredLinkedDestinationURL;
-(NSString *)filteredVideoPreviewPath;
@end

