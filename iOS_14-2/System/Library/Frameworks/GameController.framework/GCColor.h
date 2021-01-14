/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GCColor : NSObject <NSCopying, NSSecureCoding> {

	float _red;
	float _green;
	float _blue;

}

@property (readonly) float red;                //@synthesize red=_red - In the implementation block
@property (readonly) float green;              //@synthesize green=_green - In the implementation block
@property (readonly) float blue;               //@synthesize blue=_blue - In the implementation block
+(BOOL)supportsSecureCoding;
-(float)red;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(float)blue;
-(id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(float)green;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

