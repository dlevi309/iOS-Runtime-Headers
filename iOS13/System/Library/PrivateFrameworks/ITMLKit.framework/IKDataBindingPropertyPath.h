/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKDataBindingValue.h>

@class NSString, NSArray;

@interface IKDataBindingPropertyPath : IKDataBindingValue {

	NSString* _string;
	NSArray* _accessorSequence;

}

@property (nonatomic,copy,readonly) NSString * string;                       //@synthesize string=_string - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accessorSequence;              //@synthesize accessorSequence=_accessorSequence - In the implementation block
+(id)pathStringForAccessorSequence:(id)arg1 ;
-(NSString *)string;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithString:(id)arg1 ;
-(NSArray *)accessorSequence;
-(id)propertyPathByRemovingFirstAccessor;
-(id)initWithAccessorSequence:(id)arg1 ;
-(id)_initWithAccessorSequence:(id)arg1 ;
-(id)propertyPathByCombiningAccessorSequence:(id)arg1 ;
@end

