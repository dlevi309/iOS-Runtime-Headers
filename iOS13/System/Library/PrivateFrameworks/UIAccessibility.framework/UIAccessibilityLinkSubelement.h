/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class NSURL;

@interface UIAccessibilityLinkSubelement : UIAccessibilityElement {

	NSURL* _url;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;              //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSURL * url;                //@synthesize url=_url - In the implementation block
-(NSURL *)url;
-(NSRange)range;
-(void)setUrl:(NSURL *)arg1 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(void)setRange:(NSRange)arg1 ;
-(unsigned long long)_accessibilityAutomationType;
-(id)textRangeForTextView:(id)arg1 ;
@end

