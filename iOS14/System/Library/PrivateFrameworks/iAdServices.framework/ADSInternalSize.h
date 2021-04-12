/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
*/

#import <iAdServices/iAdServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ADSInternalSize : NSObject <NSSecureCoding, NSCopying> {

	float _width;
	float _height;

}

@property (assign,nonatomic) float width;               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float height;              //@synthesize height=_height - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setHeight:(float)arg1 ;
-(float)width;
-(void)setWidth:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(float)height;
-(id)initWithWidth:(float)arg1 height:(float)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

