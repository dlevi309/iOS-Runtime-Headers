/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSString *)literal;
-(IKDataBindingPropertyPath *)propertyPath;
-(BOOL)passesForDataItem:(id)arg1 ;
-(void)setPropertyPath:(IKDataBindingPropertyPath *)arg1 ;
-(void)setLiteral:(NSString *)arg1 ;
@end

