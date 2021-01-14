/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIKeyboardSuppressionPolicyDelegate.h>

@class NSString;

@interface _UIKeyboardSuppressionPencilPolicyDelegate : NSObject <_UIKeyboardSuppressionPolicyDelegate> {

	BOOL _isQueryingLocaleIdentifier;
	BOOL _suppressLocaleIdentifier;
	NSString* _overrideLocaleIdentifier;

}

@property (assign,nonatomic) BOOL _suppressLocaleIdentifier;                  //@synthesize suppressLocaleIdentifier=_suppressLocaleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * _overrideLocaleIdentifier;              //@synthesize overrideLocaleIdentifier=_overrideLocaleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_recognitionLocaleIdentifier;
-(NSString *)_overrideLocaleIdentifier;
-(BOOL)_suppressLocaleIdentifier;
-(BOOL)_shouldSuppressForDelegate:(id)arg1 ;
-(void)set_suppressLocaleIdentifier:(BOOL)arg1 ;
-(void)set_overrideLocaleIdentifier:(NSString *)arg1 ;
@end

