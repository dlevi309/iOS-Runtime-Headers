/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)DSID;
-(id)initWithDSID:(id)arg1 carrierBundleDeviceIdentifier:(id)arg2 delegatedDSID:(id)arg3 ;
-(NSString *)carrierBundleDeviceIdentifier;
-(unsigned long long)hash;
-(NSNumber *)delegatedDSID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

