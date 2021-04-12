/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/

#import <ControlCenterUIKit/CCUIMenuModuleItem.h>

@interface CCUIWiFiMenuModuleItem : CCUIMenuModuleItem {

	BOOL _hotspot;
	BOOL _secure;
	unsigned long long _signalBars;

}

@property (assign,getter=isHotspot,nonatomic) BOOL hotspot;              //@synthesize hotspot=_hotspot - In the implementation block
@property (assign,getter=isSecure,nonatomic) BOOL secure;                //@synthesize secure=_secure - In the implementation block
@property (assign,nonatomic) unsigned long long signalBars;              //@synthesize signalBars=_signalBars - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isHotspot;
-(BOOL)isSecure;
-(void)setSecure:(BOOL)arg1 ;
-(void)setSignalBars:(unsigned long long)arg1 ;
-(unsigned long long)signalBars;
-(void)setHotspot:(BOOL)arg1 ;
@end

