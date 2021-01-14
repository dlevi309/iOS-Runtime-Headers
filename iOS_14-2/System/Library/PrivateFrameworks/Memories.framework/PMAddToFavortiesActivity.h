/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <ShareSheet/UIActivity.h>

@protocol PMAddToFavortiesActivityDelegate;
@interface PMAddToFavortiesActivity : UIActivity {

	id<PMAddToFavortiesActivityDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PMAddToFavortiesActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)activityType;
-(id<PMAddToFavortiesActivityDelegate>)delegate;
-(void)performActivity;
-(void)setDelegate:(id<PMAddToFavortiesActivityDelegate>)arg1 ;
-(id)_systemImageName;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
@end

