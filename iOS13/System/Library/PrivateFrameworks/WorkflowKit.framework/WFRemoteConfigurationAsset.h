/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFCloudKitItem.h>

@class CKRecordID, NSString, WFFileRepresentation, NSNumber;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKRecordID * identifier; 
+(id)properties;
+(id)recordType;
-(CKRecordID *)identifier;
-(void)setConfiguration:(NSString *)arg1 ;
-(NSString *)configuration;
-(NSString *)assetType;
-(void)setAssetType:(NSString *)arg1 ;
-(NSNumber *)buildNumber;
-(void)setBuildNumber:(NSNumber *)arg1 ;
-(NSString *)shortVersion;
-(void)setShortVersion:(NSString *)arg1 ;
-(WFFileRepresentation *)assetDataFile;
-(void)setAssetDataFile:(WFFileRepresentation *)arg1 ;
@end

