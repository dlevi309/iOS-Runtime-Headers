/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFCloudKitItem.h>

@class CKRecordID, WFFileRepresentation, NSString, NSData;

@interface WFRemoteQuarantineAsset : NSObject <WFCloudKitItem> {

	CKRecordID* identifier;
	long long _compatibilityVersion;
	long long _contentVersion;
	WFFileRepresentation* _assetDataFile;
	NSString* _configuration;

}

@property (assign,nonatomic) long long compatibilityVersion;                    //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (assign,nonatomic) long long contentVersion;                          //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,retain) WFFileRepresentation * assetDataFile;              //@synthesize assetDataFile=_assetDataFile - In the implementation block
@property (nonatomic,copy) NSString * configuration;                            //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) CKRecordID * identifier; 
@property (nonatomic,copy) NSData * recordSystemFieldsData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)properties;
+(id)recordType;
-(long long)compatibilityVersion;
-(NSString *)configuration;
-(void)setContentVersion:(long long)arg1 ;
-(long long)contentVersion;
-(void)setCompatibilityVersion:(long long)arg1 ;
-(CKRecordID *)identifier;
-(void)setConfiguration:(NSString *)arg1 ;
-(WFFileRepresentation *)assetDataFile;
-(void)setAssetDataFile:(WFFileRepresentation *)arg1 ;
@end

