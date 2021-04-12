/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class CKDPCSData;

@interface CKDPCSMemoryCacheEntry : NSObject {

	CKDPCSData* _pcsData;
	double _lastAccess;

}

@property (nonatomic,retain) CKDPCSData * pcsData;              //@synthesize pcsData=_pcsData - In the implementation block
@property (assign) double lastAccess;                           //@synthesize lastAccess=_lastAccess - In the implementation block
-(id)init;
-(id)description;
-(id)CKPropertiesDescription;
-(void)setLastAccess:(double)arg1 ;
-(double)lastAccess;
-(CKDPCSData *)pcsData;
-(void)setPcsData:(CKDPCSData *)arg1 ;
@end

