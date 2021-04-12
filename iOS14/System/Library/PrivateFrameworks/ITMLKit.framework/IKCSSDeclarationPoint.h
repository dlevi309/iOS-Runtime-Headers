/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKCSSDeclaration.h>

@interface IKCSSDeclarationPoint : IKCSSDeclaration {

	double _value;
	unsigned long long _unit;

}

@property (assign,nonatomic) double value;                         //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long unit;              //@synthesize unit=_unit - In the implementation block
-(id)number;
-(id)stringValue;
-(void)setValue:(double)arg1 ;
-(id)description;
-(unsigned long long)unit;
-(void)setUnit:(unsigned long long)arg1 ;
-(double)value;
-(id)initWithParseDeclaration:(id)arg1 info:(id)arg2 ;
@end

