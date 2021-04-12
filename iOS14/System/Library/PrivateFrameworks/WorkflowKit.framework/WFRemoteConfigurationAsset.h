/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFCloudKitItem.h>

@class CKRecordID, NSData, NSString, WFFileRepresentation, NSNumber;

@interface WFRemoteConfigurationAsset : NSObject <WFCloudKitItem> {

	CKRecordID* identifier;
	NSString* _assetType;
	NSString* _shortVersion;
	WFFileRepresentation* _assetDataFile;
	NSString* _configuration;
	NSNumber* _buildNumber;

}

@property (nonatomic,retain) NSString * assetType;                              //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,retain) NSString * shortVersion;                           //@synthesize shortVersion=_shortVersion - In the implementation block
@property (nonatomic,retain) WFFileRepresentation * assetDataFile;              //@synthesize assetDataFile=_assetDataFile - In the implementation block
@property (nonatomic,copy) NSString * configuration;                            //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSNumber * buildNumber;                              //@synthesize buildNumber=_buildNumber - In the implementation block
@property (nonatomic,readonly) CKRecordID * identifier; 
@property (nonatomic,copy) NSData * recordSystemFieldsData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)properties;
+(id)recordType;
-(NSString *)assetType;
-(void)setBuildNumber:(NSNumber *)arg1 ;
-(void)setShortVersion:(NSString *)arg1 ;
-(void)setAssetType:(NSString *)arg1 ;
-(NSNumber *)buildNumber;
-(NSString *)shortVersion;
-(NSString *)configuration;
-(CKRecordID *)identifier;
-(void)setConfiguration:(NSString *)arg1 ;
-(WFFileRepresentation *)assetDataFile;
-(void)setAssetDataFile:(WFFileRepresentation *)arg1 ;
@end

