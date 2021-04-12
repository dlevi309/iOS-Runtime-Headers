/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(int)styleOverride;
-(id)initWithStyleOverride:(int)arg1 ;
-(void)setStyleOverride:(int)arg1 ;
@end

