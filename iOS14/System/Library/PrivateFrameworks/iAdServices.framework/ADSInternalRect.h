/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
*/

#import <iAdServices/iAdServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ADSInternalPoint, ADSInternalSize;

@interface ADSInternalRect : NSObject <NSSecureCoding, NSCopying> {

	ADSInternalPoint* _origin;
	ADSInternalSize* _size;

}

@property (nonatomic,copy) ADSInternalPoint * origin;              //@synthesize origin=_origin - In the implementation block
@property (nonatomic,copy) ADSInternalSize * size;                 //@synthesize size=_size - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setOrigin:(ADSInternalPoint *)arg1 ;
-(ADSInternalPoint *)origin;
-(ADSInternalSize *)size;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSize:(ADSInternalSize *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithX:(float)arg1 Y:(float)arg2 width:(float)arg3 height:(float)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

