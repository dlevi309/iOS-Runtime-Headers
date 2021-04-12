/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary;

@interface ICNetworkConstraints : NSObject <NSCopying, NSMutableCopying> {

	BOOL _dataAllowedFallbackValue;
	BOOL _cellularDataAllowedFallbackValue;
	BOOL _wiFiDataAllowedFallbackValue;
	NSMutableDictionary* _networkTypeToDataAllowed;
	NSMutableDictionary* _networkTypeToSizeLimit;

}
+(id)mediaTypeNetworkConstraintsFromURLBag:(id)arg1 ;
+(id)constraintsForSystemApplicationType:(long long)arg1 ;
-(BOOL)shouldAllowDataForWiFiNetworkTypes;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(id)sizeLimitForNetworkType:(long long)arg1 ;
-(BOOL)shouldAllowDataForNetworkType:(long long)arg1 ;
-(BOOL)shouldAllowDataForCellularNetworkTypes;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_copyWithClass:(Class)arg1 zone:(NSZone*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

