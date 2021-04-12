/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UARPiCloud.framework/UARPiCloud
*/

#import <UARPiCloud/UARPiCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, CKRecord;

@interface UARPiCloudAccessoryRecord : NSObject <NSCopying, NSSecureCoding> {

	NSString* _recordName;
	NSString* _recordStatus;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _firmwareVersion;
	NSString* _firmwareURL;
	NSString* _releaseType;
	NSString* _updateClassification;
	NSString* _deploymentStr;
	NSArray* _deploymentList;
	NSString* _releaseNotesURL;
	NSString* _firmwareBinaryHash;
	NSString* _releaseNotesHash;
	NSString* _signature;
	NSString* _releaseDate;
	NSString* _releaseNotesFileSize;
	NSString* _firmwareFileSize;
	CKRecord* _ckRecord;

}

@property (readonly) CKRecord * ckRecord;                          //@synthesize ckRecord=_ckRecord - In the implementation block
@property (readonly) NSString * recordName;                        //@synthesize recordName=_recordName - In the implementation block
@property (readonly) NSString * recordStatus;                      //@synthesize recordStatus=_recordStatus - In the implementation block
@property (readonly) NSString * manufacturer;                      //@synthesize manufacturer=_manufacturer - In the implementation block
@property (readonly) NSString * model;                             //@synthesize model=_model - In the implementation block
@property (readonly) NSString * firmwareVersion;                   //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (readonly) NSString * firmwareURL;                       //@synthesize firmwareURL=_firmwareURL - In the implementation block
@property (readonly) NSString * releaseType;                       //@synthesize releaseType=_releaseType - In the implementation block
@property (readonly) NSString * updateClassification;              //@synthesize updateClassification=_updateClassification - In the implementation block
@property (readonly) NSString * deploymentStr;                     //@synthesize deploymentStr=_deploymentStr - In the implementation block
@property (readonly) NSArray * deploymentList;                     //@synthesize deploymentList=_deploymentList - In the implementation block
@property (readonly) NSString * releaseNotesURL;                   //@synthesize releaseNotesURL=_releaseNotesURL - In the implementation block
@property (readonly) NSString * firmwareBinaryHash;                //@synthesize firmwareBinaryHash=_firmwareBinaryHash - In the implementation block
@property (readonly) NSString * releaseNotesHash;                  //@synthesize releaseNotesHash=_releaseNotesHash - In the implementation block
@property (readonly) NSString * signature;                         //@synthesize signature=_signature - In the implementation block
@property (readonly) NSString * releaseDate;                       //@synthesize releaseDate=_releaseDate - In the implementation block
@property (readonly) NSString * releaseNotesFileSize;              //@synthesize releaseNotesFileSize=_releaseNotesFileSize - In the implementation block
@property (readonly) NSString * firmwareFileSize;                  //@synthesize firmwareFileSize=_firmwareFileSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)releaseDate;
-(NSString *)signature;
-(NSString *)firmwareVersion;
-(NSString *)model;
-(NSString *)manufacturer;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)releaseType;
-(NSString *)recordStatus;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCKRecord:(id)arg1 ;
-(NSString *)recordName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)releaseNotesFileSize;
-(NSString *)firmwareFileSize;
-(NSString *)releaseNotesURL;
-(NSString *)firmwareURL;
-(NSString *)updateClassification;
-(NSString *)deploymentStr;
-(NSArray *)deploymentList;
-(NSString *)firmwareBinaryHash;
-(NSString *)releaseNotesHash;
-(CKRecord *)ckRecord;
@end

