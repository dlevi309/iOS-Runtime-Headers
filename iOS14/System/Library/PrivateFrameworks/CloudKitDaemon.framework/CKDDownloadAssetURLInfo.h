/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAsset:(CKAsset *)arg1 ;
-(CKAsset *)asset;
-(OpaquePCSShareProtectionRef)recordPCS;
-(void)setRecordPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

