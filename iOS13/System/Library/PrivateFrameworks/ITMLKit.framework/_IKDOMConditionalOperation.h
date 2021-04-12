/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class IKDataBindingPropertyPath, NSString;

@interface _IKDOMConditionalOperation : NSObject {

	unsigned long long _type;
	IKDataBindingPropertyPath* _propertyPath;
	NSString* _literal;

}

@property (assign,nonatomic) unsigned long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) IKDataBindingPropertyPath * propertyPath;              //@synthesize propertyPath=_propertyPath - In the implementation block
@property (nonatomic,copy) NSString * literal;                                      //@synthesize literal=_literal - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(IKDataBindingPropertyPath *)propertyPath;
-(NSString *)literal;
-(BOOL)passesForDataItem:(id)arg1 ;
-(void)setPropertyPath:(IKDataBindingPropertyPath *)arg1 ;
-(void)setLiteral:(NSString *)arg1 ;
@end

