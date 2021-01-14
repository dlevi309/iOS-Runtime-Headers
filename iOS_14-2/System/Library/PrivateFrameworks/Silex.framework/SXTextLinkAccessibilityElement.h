/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class SXTextTangierFlowRep, NSURL, NSString;

@interface SXTextLinkAccessibilityElement : UIAccessibilityElement {

	SXTextTangierFlowRep* _parentRep;
	NSURL* _url;
	NSString* _displayText;
	NSRange _rangeInParentRep;

}

@property (assign,nonatomic,__weak) SXTextTangierFlowRep * parentRep;              //@synthesize parentRep=_parentRep - In the implementation block
@property (nonatomic,readonly) NSRange rangeInParentRep;                           //@synthesize rangeInParentRep=_rangeInParentRep - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                        //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * displayText;                             //@synthesize displayText=_displayText - In the implementation block
-(BOOL)isAccessibilityElement;
-(NSURL *)url;
-(unsigned long long)accessibilityTraits;
-(id)description;
-(id)accessibilityValue;
-(CGRect)accessibilityFrame;
-(NSString *)displayText;
-(SXTextTangierFlowRep *)parentRep;
-(NSRange)rangeInParentRep;
-(id)initWithHyperlinkField:(id)arg1 parentRep:(id)arg2 ;
-(void)setParentRep:(SXTextTangierFlowRep *)arg1 ;
@end

