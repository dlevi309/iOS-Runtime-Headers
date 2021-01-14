/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AUAudioUnitViewConfiguration : NSObject <NSSecureCoding> {

	BOOL _hostHasController;
	double _width;
	double _height;

}

@property (nonatomic,readonly) double width;                        //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                       //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) BOOL hostHasController;              //@synthesize hostHasController=_hostHasController - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)width;
-(void)encodeWithCoder:(id)arg1 ;
-(double)height;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hostHasController;
-(id)initWithWidth:(double)arg1 height:(double)arg2 hostHasController:(BOOL)arg3 ;
@end

