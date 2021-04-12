/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)second;
-(id)first;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
@end

