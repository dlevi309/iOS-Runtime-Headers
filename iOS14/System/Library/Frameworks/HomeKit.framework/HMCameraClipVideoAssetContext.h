/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMCameraClipAssetContext.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface HMCameraClipVideoAssetContext : HMCameraClipAssetContext <NSCopying, NSSecureCoding> {

	NSData* _hlsPlaylist;

}

@property (copy,readonly) NSData * hlsPlaylist;              //@synthesize hlsPlaylist=_hlsPlaylist - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)hlsPlaylist;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithURL:(id)arg1 expirationDate:(id)arg2 requiredHTTPHeaders:(id)arg3 ;
-(id)initWithURL:(id)arg1 expirationDate:(id)arg2 requiredHTTPHeaders:(id)arg3 hlsPlaylist:(id)arg4 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

