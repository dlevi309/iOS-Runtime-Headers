/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) UIWindow * keyWindow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id<ICUIApplicationShimDelegate>)delegate;
-(void)setDelegate:(id<ICUIApplicationShimDelegate>)arg1 ;
-(UIWindow *)keyWindow;
-(void)beginReceivingRemoteControlEvents;
-(void)endReceivingRemoteControlEvents;
@end

