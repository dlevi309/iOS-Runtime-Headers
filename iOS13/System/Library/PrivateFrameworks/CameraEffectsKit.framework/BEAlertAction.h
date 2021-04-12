/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <UIKitCore/UIAlertAction.h>

@interface BEAlertAction : UIAlertAction {

	long long _tag;
	/*^block*/id _actionHandler;

}

@property (assign,nonatomic) long long tag;               //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy) id actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
-(long long)tag;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
-(void)setTag:(long long)arg1 ;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 tag:(long long)arg3 action:(/*^block*/id)arg4 ;
-(void)doActionHandler;
@end

