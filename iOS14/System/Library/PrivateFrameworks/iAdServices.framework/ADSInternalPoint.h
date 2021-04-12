/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
*/

#import <iAdServices/iAdServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ADSInternalPoint : NSObject <NSSecureCoding, NSCopying> {

	float _x;
	float _y;

}

@property (assign,x,nonatomic) float x;              //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) float y;              //@synthesize y=_y - In the implementation block
+(BOOL)supportsSecureCoding;
-(float)x;
-(void)setX:(float)arg1 ;
-(void)setY:(float)arg1 ;
-(float)y;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

