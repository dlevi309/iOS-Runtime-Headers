/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKGradientReferenceView.h>

@protocol CKGradientReferenceView <NSObject>
@required
-(CGRect*)gradientFrame;

@end


@class NSString;

@interface CKGradientReferenceView : UIView <CKGradientReferenceView> {

	CGRect _gradientFrame;

}

@property (assign,nonatomic) CGRect gradientFrame;                  //@synthesize gradientFrame=_gradientFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setGradientFrame:(CGRect)arg1 ;
-(CGRect)gradientFrame;
@end

