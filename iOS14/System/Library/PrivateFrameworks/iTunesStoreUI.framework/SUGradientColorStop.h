/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)compare:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(double)offset;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGColorRef)copyCGColor;
-(id)initWithColor:(CGColorRef)arg1 offset:(double)arg2 ;
@end

