/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol NSObject;
@class NSUUID, UITextRange;

@interface UIAccessibilityCustomRotorItemResult : NSObject {

	NSUUID* uuid;
	id<NSObject> _targetElement;
	UITextRange* _targetRange;

}

@property (nonatomic,retain) NSUUID * uuid; 
@property (assign,nonatomic,__weak) id<NSObject> targetElement;              //@synthesize targetElement=_targetElement - In the implementation block
@property (nonatomic,retain) UITextRange * targetRange;                      //@synthesize targetRange=_targetRange - In the implementation block
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(id<NSObject>)targetElement;
-(void)setTargetElement:(id<NSObject>)arg1 ;
-(void)setTargetRange:(UITextRange *)arg1 ;
-(id)initWithTargetElement:(id)arg1 targetRange:(id)arg2 ;
-(UITextRange *)targetRange;
@end

