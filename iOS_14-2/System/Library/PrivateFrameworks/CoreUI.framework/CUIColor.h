/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGColorRef)CGColor;
-(id)initWithCIColor:(id)arg1 ;
-(id)description;
-(id)colorUsingCGColorSpace:(CGColorSpaceRef)arg1 ;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

