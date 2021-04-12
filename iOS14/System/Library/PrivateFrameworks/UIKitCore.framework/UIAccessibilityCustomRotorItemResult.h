/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTargetElement:(id)arg1 targetRange:(id)arg2 ;
-(UITextRange *)targetRange;
-(id<NSObject>)targetElement;
-(void)setTargetRange:(UITextRange *)arg1 ;
-(void)setTargetElement:(id<NSObject>)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
@end

