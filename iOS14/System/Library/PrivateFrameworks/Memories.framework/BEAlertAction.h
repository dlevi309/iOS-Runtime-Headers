/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UIAlertAction.h>

@interface BEAlertAction : UIAlertAction {

	long long _tag;
	/*^block*/id _actionHandler;

}

@property (assign,nonatomic) long long tag;               //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy) id actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
-(void)setTag:(long long)arg1 ;
-(id)actionHandler;
-(long long)tag;
-(void)setActionHandler:(id)arg1 ;
-(void)doActionHandler;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 tag:(long long)arg3 action:(/*^block*/id)arg4 ;
@end

