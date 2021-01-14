/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <SystemStatus/STWifiStatusDomainData.h>
#import <libobjc.A.dylib/STMutableStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/STMutableStatusDomainData.h>

@class NSString;

@interface STMutableWifiStatusDomainData : STWifiStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (assign,getter=isWifiActive,nonatomic) BOOL wifiActive; 
@property (assign,nonatomic) unsigned long long signalStrengthBars; 
@property (assign,getter=isAssociatedToIOSHotspot,nonatomic) BOOL associatedToIOSHotspot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)applyDiff:(id)arg1 ;
-(void)setSignalStrengthBars:(unsigned long long)arg1 ;
-(void)setWifiActive:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAssociatedToIOSHotspot:(BOOL)arg1 ;
@end

