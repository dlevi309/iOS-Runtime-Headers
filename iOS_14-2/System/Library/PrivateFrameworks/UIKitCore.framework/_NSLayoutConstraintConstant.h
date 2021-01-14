/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _NSLayoutConstraintConstant : NSObject <NSCoding, NSCopying> {

	NSString* _symbolicValue;
	double _numericValue;

}

@property (nonatomic,copy,readonly) NSString * symbolicValue;              //@synthesize symbolicValue=_symbolicValue - In the implementation block
@property (nonatomic,readonly) double numericValue;                        //@synthesize numericValue=_numericValue - In the implementation block
+(id)constantWithSymbolicValue:(id)arg1 numericValue:(double)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)symbolicValue;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSymbolicValue:(id)arg1 numericValue:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(double)numericValue;
@end

