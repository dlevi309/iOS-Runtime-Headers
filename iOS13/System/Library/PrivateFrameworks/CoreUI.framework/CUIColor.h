/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CUIColor : NSObject <NSCopying> {

	CGColorRef _cgColor;

}

@property (nonatomic,readonly) CGColorRef CGColor;              //@synthesize cgColor=_cgColor - In the implementation block
+(id)colorWithCGColor:(CGColorRef)arg1 ;
+(id)colorWithCIColor:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGColorRef)CGColor;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)initWithCIColor:(id)arg1 ;
-(id)colorUsingCGColorSpace:(CGColorSpaceRef)arg1 ;
@end

