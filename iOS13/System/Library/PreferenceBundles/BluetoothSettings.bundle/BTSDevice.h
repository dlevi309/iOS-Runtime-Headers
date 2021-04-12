/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/


@interface BTSDevice : NSObject

@property (assign,getter=isHealthDevice,nonatomic) BOOL healthDevice; 
@property (getter=isMyDevice,nonatomic,readonly) BOOL myDevice; 
@property (assign,getter=isCTKDDevice,nonatomic) BOOL ctkdDevice; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(long long)compare:(id)arg1 ;
-(id)identifier;
-(void)disconnect;
-(BOOL)connect;
-(BOOL)connected;
-(BOOL)paired;
-(BOOL)isiPad;
-(void)unpair;
-(BOOL)cloudPaired;
-(BOOL)ancsAuthorized;
-(BOOL)isLimitedConnectivityDevice;
-(id)classicDevice;
-(BOOL)isHealthDevice;
-(void)setHealthDevice:(BOOL)arg1 ;
-(void)setCtkdDevice:(BOOL)arg1 ;
-(BOOL)isCTKDDevice;
-(BOOL)isMyDevice;
-(BOOL)isApplePencil:(int*)arg1 ;
-(void)setANCSAuthorization:(BOOL)arg1 ;
-(BOOL)supportsANCS;
-(BOOL)isTemporaryPairedDevice;
@end

