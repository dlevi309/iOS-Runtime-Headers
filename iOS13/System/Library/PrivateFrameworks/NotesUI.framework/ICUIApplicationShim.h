/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <libobjc.A.dylib/ICUIApplicationShim.h>
@class UIWindow;


@protocol ICUIApplicationShim <NSObject>
@property (nonatomic,readonly) UIWindow * keyWindow; 
@required
-(UIWindow *)keyWindow;
-(void)beginReceivingRemoteControlEvents;
-(void)endReceivingRemoteControlEvents;

@end


@protocol ICUIApplicationShimDelegate;
@class UIWindow, NSString;

@interface ICUIApplicationShim : NSObject <ICUIApplicationShim> {

	id<ICUIApplicationShimDelegate> _delegate;

}

@property (nonatomic,retain) id<ICUIApplicationShimDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIWindow * keyWindow; 
+(id)sharedInstance;
-(id<ICUIApplicationShimDelegate>)delegate;
-(void)setDelegate:(id<ICUIApplicationShimDelegate>)arg1 ;
-(UIWindow *)keyWindow;
-(void)beginReceivingRemoteControlEvents;
-(void)endReceivingRemoteControlEvents;
@end

