/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/


@interface BTSDevice : NSObject

@property (assign,getter=isHealthDevice,nonatomic) BOOL healthDevice; 
@property (getter=isMyDevice,nonatomic,readonly) BOOL myDevice; 
@property (assign,getter=isCTKDDevice,nonatomic) BOOL ctkdDevice; 
-(BOOL)isiPad;
-(BOOL)connected;
-(void)disconnect;
-(id)productName;
-(long long)compare:(id)arg1 ;
-(BOOL)paired;
-(void)unpair;
-(BOOL)connect;
-(BOOL)ancsAuthorized;
-(id)name;
-(unsigned long long)hash;
-(id)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isLimitedConnectivityDevice;
-(id)classicDevice;
-(BOOL)isHealthDevice;
-(void)setHealthDevice:(BOOL)arg1 ;
-(void)setCtkdDevice:(BOOL)arg1 ;
-(BOOL)isCTKDDevice;
-(BOOL)isMyDevice;
-(BOOL)cloudPaired;
-(BOOL)isApplePencil:(int*)arg1 ;
-(void)setANCSAuthorization:(BOOL)arg1 ;
-(BOOL)supportsANCS;
-(BOOL)isTemporaryPairedDevice;
@end

