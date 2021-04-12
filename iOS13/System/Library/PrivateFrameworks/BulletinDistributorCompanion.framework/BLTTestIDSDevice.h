/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/BLTAbstractIDSDevice.h>

@class NSString;

@interface BLTTestIDSDevice : NSObject <BLTAbstractIDSDevice> {

	BOOL _isDefaultPairedDevice;
	BOOL _isNearby;
	BOOL _isConnected;
	BOOL _isCloudReachable;

}

@property (assign,nonatomic) BOOL isDefaultPairedDevice;              //@synthesize isDefaultPairedDevice=_isDefaultPairedDevice - In the implementation block
@property (assign,nonatomic) BOOL isNearby;                           //@synthesize isNearby=_isNearby - In the implementation block
@property (assign,nonatomic) BOOL isConnected;                        //@synthesize isConnected=_isConnected - In the implementation block
@property (assign,nonatomic) BOOL isCloudReachable;                   //@synthesize isCloudReachable=_isCloudReachable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isConnected;
-(void)setIsConnected:(BOOL)arg1 ;
-(BOOL)isDefaultPairedDevice;
-(BOOL)isNearby;
-(BOOL)isCloudReachable;
-(void)setIsDefaultPairedDevice:(BOOL)arg1 ;
-(void)setIsNearby:(BOOL)arg1 ;
-(void)setIsCloudReachable:(BOOL)arg1 ;
@end

