/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKUploadRequestConfiguration, CKRecordID, NSString;

@interface CKMarkAssetBrokenOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _touchRepairZone;
	BOOL _bypassPCSEncryptionForTouchRepairZone;
	BOOL _simulateCorruptAsset;
	BOOL _writeRepairRecord;
	CKUploadRequestConfiguration* _uploadRequestConfiguration;
	CKRecordID* _recordID;
	NSString* _field;
	long long _listIndex;

}

@property (nonatomic,retain) CKUploadRequestConfiguration * uploadRequestConfiguration;              //@synthesize uploadRequestConfiguration=_uploadRequestConfiguration - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                                                  //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * field;                                                       //@synthesize field=_field - In the implementation block
@property (assign,nonatomic) long long listIndex;                                                    //@synthesize listIndex=_listIndex - In the implementation block
@property (assign,nonatomic) BOOL touchRepairZone;                                                   //@synthesize touchRepairZone=_touchRepairZone - In the implementation block
@property (assign,nonatomic) BOOL bypassPCSEncryptionForTouchRepairZone;                             //@synthesize bypassPCSEncryptionForTouchRepairZone=_bypassPCSEncryptionForTouchRepairZone - In the implementation block
@property (assign,nonatomic) BOOL simulateCorruptAsset;                                              //@synthesize simulateCorruptAsset=_simulateCorruptAsset - In the implementation block
@property (assign,nonatomic) BOOL writeRepairRecord;                                                 //@synthesize writeRepairRecord=_writeRepairRecord - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKRecordID *)recordID;
-(NSString *)field;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKUploadRequestConfiguration *)uploadRequestConfiguration;
-(void)setUploadRequestConfiguration:(CKUploadRequestConfiguration *)arg1 ;
-(long long)listIndex;
-(void)setListIndex:(long long)arg1 ;
-(void)setTouchRepairZone:(BOOL)arg1 ;
-(void)setField:(NSString *)arg1 ;
-(BOOL)touchRepairZone;
-(BOOL)simulateCorruptAsset;
-(void)setSimulateCorruptAsset:(BOOL)arg1 ;
-(BOOL)bypassPCSEncryptionForTouchRepairZone;
-(void)setBypassPCSEncryptionForTouchRepairZone:(BOOL)arg1 ;
-(BOOL)writeRepairRecord;
-(void)setWriteRepairRecord:(BOOL)arg1 ;
@end

