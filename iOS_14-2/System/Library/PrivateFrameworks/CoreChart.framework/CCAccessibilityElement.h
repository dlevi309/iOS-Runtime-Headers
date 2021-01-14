/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <CoreChart/CoreChart-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class NSString;

@interface CCAccessibilityElement : UIAccessibilityElement {

	NSString* label;
	NSString* roleDescription;

}

@property (assign) CGRect frame; 
@property (retain) NSString * label; 
@property (retain) NSString * roleDescription; 
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(NSString *)roleDescription;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setRoleDescription:(NSString *)arg1 ;
@end

