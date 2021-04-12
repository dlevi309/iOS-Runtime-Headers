/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFCloudKitItem.h>

@class CKRecordID, WFFileRepresentation, NSString;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKRecordID * identifier; 
+(id)properties;
+(id)recordType;
-(CKRecordID *)identifier;
-(long long)compatibilityVersion;
-(void)setConfiguration:(NSString *)arg1 ;
-(NSString *)configuration;
-(void)setCompatibilityVersion:(long long)arg1 ;
-(long long)contentVersion;
-(void)setContentVersion:(long long)arg1 ;
-(WFFileRepresentation *)assetDataFile;
-(void)setAssetDataFile:(WFFileRepresentation *)arg1 ;
@end

