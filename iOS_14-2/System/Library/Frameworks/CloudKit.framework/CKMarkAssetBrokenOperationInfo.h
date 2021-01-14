/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)field;
-(void)setListIndex:(long long)arg1 ;
-(void)setUploadRequestConfiguration:(CKUploadRequestConfiguration *)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)listIndex;
-(void)setTouchRepairZone:(BOOL)arg1 ;
-(BOOL)touchRepairZone;
-(BOOL)simulateCorruptAsset;
-(void)setSimulateCorruptAsset:(BOOL)arg1 ;
-(BOOL)bypassPCSEncryptionForTouchRepairZone;
-(BOOL)writeRepairRecord;
-(void)setBypassPCSEncryptionForTouchRepairZone:(BOOL)arg1 ;
-(void)setWriteRepairRecord:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setField:(NSString *)arg1 ;
-(CKUploadRequestConfiguration *)uploadRequestConfiguration;
-(CKRecordID *)recordID;
@end

