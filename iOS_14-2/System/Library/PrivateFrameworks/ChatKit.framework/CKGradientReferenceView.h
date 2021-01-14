/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setGradientFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)gradientFrame;
@end

