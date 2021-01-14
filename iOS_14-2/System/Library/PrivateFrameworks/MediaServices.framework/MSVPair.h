/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MSVPair : NSObject <NSSecureCoding, NSCopying> {

	id _first;
	id _second;

}

@property (nonatomic,readonly) id first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) id second;              //@synthesize second=_second - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pairWithFirst:(id)arg1 second:(id)arg2 ;
-(id)second;
-(id)first;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

