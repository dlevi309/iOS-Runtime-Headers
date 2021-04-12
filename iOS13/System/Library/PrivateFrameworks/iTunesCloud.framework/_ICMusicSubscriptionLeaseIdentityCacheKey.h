/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface _ICMusicSubscriptionLeaseIdentityCacheKey : NSObject <NSCopying> {

	NSNumber* _delegatedDSID;
	NSNumber* _DSID;
	NSString* _carrierBundleDeviceIdentifier;

}

@property (nonatomic,copy,readonly) NSNumber * delegatedDSID;                              //@synthesize delegatedDSID=_delegatedDSID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * DSID;                                       //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,copy,readonly) NSString * carrierBundleDeviceIdentifier;              //@synthesize carrierBundleDeviceIdentifier=_carrierBundleDeviceIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)DSID;
-(NSString *)carrierBundleDeviceIdentifier;
-(NSNumber *)delegatedDSID;
-(id)initWithDSID:(id)arg1 carrierBundleDeviceIdentifier:(id)arg2 delegatedDSID:(id)arg3 ;
@end

