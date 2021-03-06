/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol WFScanManagerDelegate <NSObject>
@optional
-(id)scanManager:(id)arg1 filterScanResults:(id)arg2;
-(void)scanManagerScanningWillStart:(id)arg1;
-(void)scanManager:(id)arg1 stateDidChange:(long long)arg2;
-(void)scanManager:(id)arg1 didFindHotspotHelperNetworks:(id)arg2;
-(BOOL)scanManagerShouldSupportHotspotHelper:(id)arg1;
-(BOOL)scanManagerShouldSupportUnfilteredScanning:(id)arg1;
-(id)scanManagerKnownNetworks:(id)arg1;

@required
-(void)scanManager:(id)arg1 updatedPartialResults:(id)arg2;
-(void)scanManagerScanningDidFinish:(id)arg1 withResults:(id)arg2 error:(id)arg3;

@end

