/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIBarButtonItem.h>

@class SFDownloadsBarButtonItemView;

@interface SFDownloadsBarButtonItem : UIBarButtonItem {

	SFDownloadsBarButtonItemView* _buttonView;
	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)pulse;
@end

