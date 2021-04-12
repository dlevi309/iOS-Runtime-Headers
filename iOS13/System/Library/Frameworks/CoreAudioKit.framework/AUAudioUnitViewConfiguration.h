/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)width;
-(double)height;
-(BOOL)hostHasController;
-(id)initWithWidth:(double)arg1 height:(double)arg2 hostHasController:(BOOL)arg3 ;
@end

