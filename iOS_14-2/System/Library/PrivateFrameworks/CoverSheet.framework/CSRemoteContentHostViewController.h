/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SBSRemoteContentHostInterface.h>

@protocol CSRemoteContentHostDelegate;
@class SBSRemoteContentPreferences, SBSRemoteContentDefinition;

@interface CSRemoteContentHostViewController : _UIRemoteViewController <SBSRemoteContentHostInterface> {

	SBSRemoteContentPreferences* _contentPreferences;
	id<CSRemoteContentHostDelegate> _delegate;
	SBSRemoteContentDefinition* _definition;

}

@property (nonatomic,retain) SBSRemoteContentDefinition * definition;                      //@synthesize definition=_definition - In the implementation block
@property (assign,nonatomic,__weak) id<CSRemoteContentHostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<CSRemoteContentHostDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<CSRemoteContentHostDelegate>)arg1 ;
-(void)setDefinition:(SBSRemoteContentDefinition *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(SBSRemoteContentDefinition *)definition;
-(void)didChangeStyle;
-(void)getContentBoundsWithReplyBlock:(/*^block*/id)arg1 ;
-(void)didDismissForDismissType:(long long)arg1 ;
-(void)configureWithDefinition:(id)arg1 ;
-(id)contentPreferences;
-(void)_fetchContentPreferences;
-(void)_updateContentPreferences:(id)arg1 ;
@end

