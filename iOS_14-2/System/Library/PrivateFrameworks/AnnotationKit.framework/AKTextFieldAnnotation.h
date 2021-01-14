/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AKTextBoxAnnotation.h>

@class NSString;

@interface AKTextFieldAnnotation : AKTextBoxAnnotation {

	NSString* _fieldName;

}

@property (copy) NSString * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)fieldName;
-(id)initWithCoder:(id)arg1 ;
-(void)setFieldName:(NSString *)arg1 ;
@end

