/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/ICRadioStoreContentReference.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface ICRadioTrackInfoContentReference : ICRadioStoreContentReference <NSCopying, NSSecureCoding> {

	NSDictionary* _trackInfo;

}

@property (nonatomic,copy,readonly) NSDictionary * trackInfo;              //@synthesize trackInfo=_trackInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)rawContentDictionary;
-(id)initWithStoreIdentifier:(id)arg1 trackInfo:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)trackInfo;
@end

