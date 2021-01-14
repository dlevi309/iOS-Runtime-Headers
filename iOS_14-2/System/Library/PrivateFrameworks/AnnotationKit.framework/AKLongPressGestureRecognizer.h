/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>
#import <libobjc.A.dylib/AKPenDetectionGestureRecognizerProtocol.h>

@class NSString;

@interface AKLongPressGestureRecognizer : UILongPressGestureRecognizer <AKPenDetectionGestureRecognizerProtocol> {

	BOOL _penGestureDetected;

}

@property (assign,nonatomic) BOOL penGestureDetected;               //@synthesize penGestureDetected=_penGestureDetected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setPenGestureDetected:(BOOL)arg1 ;
-(void)_checkTouchesForStylus:(id)arg1 ;
-(BOOL)penGestureDetected;
@end

