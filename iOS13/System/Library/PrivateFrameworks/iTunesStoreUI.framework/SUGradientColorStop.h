/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SUGradientColorStop : NSObject <NSSecureCoding> {

	double _r;
	double _g;
	double _b;
	double _a;
	double _offset;
	CGColorRef _rawColor;

}

@property (nonatomic,readonly) double offset; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)offset;
-(CGColorRef)copyCGColor;
-(id)initWithColor:(CGColorRef)arg1 offset:(double)arg2 ;
@end

