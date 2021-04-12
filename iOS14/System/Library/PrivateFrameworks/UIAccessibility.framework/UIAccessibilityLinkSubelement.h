/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRange:(NSRange)arg1 ;
-(NSRange)range;
-(id)textRangeForTextView:(id)arg1 ;
-(NSURL *)url;
-(unsigned long long)accessibilityTraits;
-(CGRect)accessibilityFrame;
-(void)setUrl:(NSURL *)arg1 ;
-(unsigned long long)_accessibilityAutomationType;
@end

