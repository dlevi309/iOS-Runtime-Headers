/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICNetworkConstraints.h>

@interface ICMutableNetworkConstraints : ICNetworkConstraints
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setShouldAllowDataForCellularNetworkTypes:(BOOL)arg1 ;
-(void)setSizeLimit:(id)arg1 forNetworkType:(long long)arg2 ;
-(void)setShouldAllowDataForAllNetworkTypes:(BOOL)arg1 ;
-(void)setShouldAllowData:(BOOL)arg1 forNetworkType:(long long)arg2 ;
-(void)setShouldAllowDataForWiFiNetworkTypes:(BOOL)arg1 ;
@end

