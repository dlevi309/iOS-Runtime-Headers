/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@interface WebAccessibilityObjectWrapperBase : NSObject {

	AXCoreObject* m_object;
	unsigned _identifier;

}

@property (assign,nonatomic) unsigned identifier;              //@synthesize identifier=_identifier - In the implementation block
+(void)accessibilitySetShouldRepostNotifications:(BOOL)arg1 ;
-(unsigned)identifier;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)detach;
-(id)initWithAccessibilityObject:(AXCoreObject*)arg1 ;
-(void)accessibilityPostedNotification:(id)arg1 ;
-(id)attachmentView;
-(AXCoreObject*)accessibilityObject;
-(CGPathRef)convertPathToScreenSpace:(Path*)arg1 ;
-(id)baseAccessibilityDescription;
-(id)baseAccessibilityTitle;
-(id)ariaLandmarkRoleDescription;
-(id)baseAccessibilityHelpText;
-(CGRect)convertRectToSpace:(FloatRect*)arg1 space:(int)arg2 ;
-(void)accessibilityPostedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)_accessibilityWebDocumentView;
-(void)baseAccessibilitySetFocus:(BOOL)arg1 ;
-(id)baseAccessibilitySpeechHint;
-(id)accessibilityMathPostscriptPairs;
-(id)accessibilityMathPrescriptPairs;
-(id)accessibilityPlatformMathSubscriptKey;
-(id)accessibilityPlatformMathSuperscriptKey;
-(AXCoreObject*)axBackingObject;
-(BOOL)updateObjectBackingStore;
@end

