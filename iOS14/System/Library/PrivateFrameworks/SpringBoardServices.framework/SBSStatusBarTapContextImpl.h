/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SBSStatusBarTapContext.h>

@interface SBSStatusBarTapContextImpl : NSObject <NSSecureCoding, SBSStatusBarTapContext> {

	int _styleOverride;

}

@property (assign,nonatomic) int styleOverride;              //@synthesize styleOverride=_styleOverride - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(int)styleOverride;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyleOverride:(int)arg1 ;
-(id)initWithStyleOverride:(int)arg1 ;
@end

