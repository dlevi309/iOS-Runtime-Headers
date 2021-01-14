/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@protocol PSURLControllerHandlerDelegate;
@class NSObject;

@interface PSURLControllerHandler : NSObject {

	NSObject*<PSURLControllerHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<PSURLControllerHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSObject*<PSURLControllerHandlerDelegate>)delegate;
-(void)setDelegate:(NSObject*<PSURLControllerHandlerDelegate>)arg1 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

