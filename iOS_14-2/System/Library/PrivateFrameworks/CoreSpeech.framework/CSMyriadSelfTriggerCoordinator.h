/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSSelfTriggerDetectorDelegate.h>

@protocol CSMyriadSelfTriggerCoordinatorDelegate;
@class NSString;

@interface CSMyriadSelfTriggerCoordinator : NSObject <CSSelfTriggerDetectorDelegate> {

	id<CSMyriadSelfTriggerCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSMyriadSelfTriggerCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CSMyriadSelfTriggerCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<CSMyriadSelfTriggerCoordinatorDelegate>)arg1 ;
-(void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2 ;
@end

