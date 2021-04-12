/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class CKAsset;

@interface CKDDownloadAssetURLInfo : NSObject {

	CKAsset* _asset;
	OpaquePCSShareProtectionRef _recordPCS;

}

@property (nonatomic,retain) CKAsset * asset;                                    //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef recordPCS;              //@synthesize recordPCS=_recordPCS - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CKAsset *)asset;
-(void)setAsset:(CKAsset *)arg1 ;
-(void)setRecordPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(OpaquePCSShareProtectionRef)recordPCS;
@end

