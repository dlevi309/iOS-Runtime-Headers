/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)colorWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4 ;
+(id)colorWithH:(double)arg1 S:(double)arg2 B:(double)arg3 A:(double)arg4 ;
+(id)colorFromString:(id)arg1 ;
-(CGColorRef)CGColor;
-(double)luminance;
-(void)encodeWithCoder:(id)arg1 ;
-(CGColorRef)_newCGColor;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

