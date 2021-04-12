/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCVersion.h>

@class CKRecord, NSError;

@interface BRCLocalVersion : BRCVersion {

	CKRecord* _uploadedAssets;
	NSError* _uploadError;

}

@property (nonatomic,retain) CKRecord * uploadedAssets;              //@synthesize uploadedAssets=_uploadedAssets - In the implementation block
@property (nonatomic,retain) NSError * uploadError;                  //@synthesize uploadError=_uploadError - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithVersion:(id)arg1 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(void)setUploadError:(NSError *)arg1 ;
-(NSError *)uploadError;
-(id)descriptionWithContext:(id)arg1 ;
-(id)initFromResultSet:(id)arg1 pos:(int)arg2 ;
-(id)initForPackage:(BOOL)arg1 ;
-(void)_clearSignatures:(unsigned long long)arg1 isPackage:(BOOL)arg2 ;
-(id)initWithLocalVersion:(id)arg1 ;
-(void)updateLocationAndMetaFromFSAtPath:(id)arg1 updateFilename:(BOOL)arg2 filenameOverride:(id)arg3 ;
-(id)isPackageObj;
-(id)sizeObj;
-(unsigned long long)diffAgainstLocalVersion:(id)arg1 ;
-(id)initWithServerVersion:(id)arg1 ;
-(BOOL)shouldRecreateUploadJobGivenDiffs:(unsigned long long)arg1 ;
-(BOOL)isMissingUploadsWithDiffs:(unsigned long long)arg1 ;
-(void)updateFromFSAtPath:(id)arg1 filenameOverride:(id)arg2 ;
-(CKRecord *)uploadedAssets;
-(void)setUploadedAssets:(CKRecord *)arg1 ;
@end

