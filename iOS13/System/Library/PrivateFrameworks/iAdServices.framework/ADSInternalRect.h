/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ADSInternalSize *)size;
-(ADSInternalPoint *)origin;
-(void)setSize:(ADSInternalSize *)arg1 ;
-(void)setOrigin:(ADSInternalPoint *)arg1 ;
-(id)initWithX:(float)arg1 Y:(float)arg2 width:(float)arg3 height:(float)arg4 ;
@end

