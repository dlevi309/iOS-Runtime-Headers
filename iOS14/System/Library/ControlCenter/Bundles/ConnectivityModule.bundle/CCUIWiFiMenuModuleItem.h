/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isSecure;
-(void)setSignalBars:(unsigned long long)arg1 ;
-(unsigned long long)signalBars;
-(void)setSecure:(BOOL)arg1 ;
-(void)setHotspot:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)isHotspot;
-(BOOL)isEqual:(id)arg1 ;
@end

