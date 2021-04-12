/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class CKDPCSData;

@interface CKDPCSMemoryCacheEntry : NSObject {

	CKDPCSData* _pcsData;
	double _lastAccess;

}

@property (nonatomic,retain) CKDPCSData * pcsData;              //@synthesize pcsData=_pcsData - In the implementation block
@property (assign) double lastAccess;                           //@synthesize lastAccess=_lastAccess - In the implementation block
-(double)lastAccess;
-(id)init;
-(void)setLastAccess:(double)arg1 ;
-(id)CKPropertiesDescription;
-(id)description;
-(CKDPCSData *)pcsData;
-(void)setPcsData:(CKDPCSData *)arg1 ;
@end

