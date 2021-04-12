/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKCSSDeclaration.h>

@interface IKCSSDeclarationPoint : IKCSSDeclaration {

	double _value;
	unsigned long long _unit;

}

@property (assign,nonatomic) double value;                         //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) unsigned long long unit;              //@synthesize unit=_unit - In the implementation block
-(id)description;
-(id)stringValue;
-(double)value;
-(unsigned long long)unit;
-(void)setValue:(double)arg1 ;
-(id)number;
-(void)setUnit:(unsigned long long)arg1 ;
-(id)initWithParseDeclaration:(id)arg1 info:(id)arg2 ;
@end

