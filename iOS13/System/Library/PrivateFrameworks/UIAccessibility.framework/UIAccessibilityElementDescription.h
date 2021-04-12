/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSAttributedString;

@interface UIAccessibilityElementDescription : NSObject <NSSecureCoding> {

	BOOL _isAccessibleElement;
	unsigned long long _traits;
	NSString* _label;
	NSAttributedString* _attributedLabel;
	NSString* _value;
	NSAttributedString* _attributedValue;
	CGRect _frameInContainerSpace;
	CGRect _frame;

}

@property (assign,nonatomic) BOOL isAccessibleElement;                          //@synthesize isAccessibleElement=_isAccessibleElement - In the implementation block
@property (assign,nonatomic) unsigned long long traits;                         //@synthesize traits=_traits - In the implementation block
@property (nonatomic,retain) NSString * label;                                  //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedLabel;              //@synthesize attributedLabel=_attributedLabel - In the implementation block
@property (nonatomic,retain) NSString * value;                                  //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedValue;              //@synthesize attributedValue=_attributedValue - In the implementation block
@property (assign,nonatomic) CGRect frameInContainerSpace;                      //@synthesize frameInContainerSpace=_frameInContainerSpace - In the implementation block
@property (assign,nonatomic) CGRect frame;                                      //@synthesize frame=_frame - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptionWithElement:(id)arg1 frameInContainerSpaceOrNil:(CGRect)arg2 ;
+(id)_descriptionWithAXElement:(id)arg1 ;
+(id)_descriptionWithLocalElement:(id)arg1 ;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(CGRect)frame;
-(unsigned long long)traits;
-(void)setTraits:(unsigned long long)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)isAccessibleElement;
-(id)convertToAccessibilityElementWithContainer:(id)arg1 ;
-(void)setFrameInContainerSpace:(CGRect)arg1 ;
-(void)setIsAccessibleElement:(BOOL)arg1 ;
-(void)setAttributedLabel:(NSAttributedString *)arg1 ;
-(void)setAttributedValue:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedLabel;
-(NSAttributedString *)attributedValue;
-(CGRect)frameInContainerSpace;
@end

