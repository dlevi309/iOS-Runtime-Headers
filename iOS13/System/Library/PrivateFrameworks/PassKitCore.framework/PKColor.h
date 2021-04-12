/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKColor : NSObject <NSSecureCoding, NSCopying> {

	double _red;
	double _green;
	double _blue;
	double _alpha;
	CGColorRef _colorRef;

}

@property (nonatomic,__weak,readonly) NSString * string; 
@property (nonatomic,readonly) unsigned long long hash; 
@property (nonatomic,readonly) CGColorRef CGColor; 
+(BOOL)supportsSecureCoding;
+(id)colorFromString:(id)arg1 ;
+(id)colorWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4 ;
+(id)colorWithH:(double)arg1 S:(double)arg2 B:(double)arg3 A:(double)arg4 ;
-(NSString *)string;
-(void)dealloc;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGColorRef)CGColor;
-(double)luminance;
-(CGColorRef)_newCGColor;
@end

