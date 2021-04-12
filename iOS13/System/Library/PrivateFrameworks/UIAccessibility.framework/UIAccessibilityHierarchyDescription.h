/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIAccessibilityElementDescription, NSArray;

@interface UIAccessibilityHierarchyDescription : NSObject <NSSecureCoding> {

	UIAccessibilityElementDescription* _rootElement;
	NSArray* _leafElements;

}

@property (nonatomic,retain) UIAccessibilityElementDescription * rootElement;              //@synthesize rootElement=_rootElement - In the implementation block
@property (nonatomic,retain) NSArray * leafElements;                                       //@synthesize leafElements=_leafElements - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRootElement:(UIAccessibilityElementDescription *)arg1 ;
-(UIAccessibilityElementDescription *)rootElement;
-(void)setLeafElements:(NSArray *)arg1 ;
-(NSArray *)leafElements;
@end

