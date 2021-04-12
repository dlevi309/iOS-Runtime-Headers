/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)x;
-(float)y;
-(void)setX:(float)arg1 ;
-(void)setY:(float)arg1 ;
@end

