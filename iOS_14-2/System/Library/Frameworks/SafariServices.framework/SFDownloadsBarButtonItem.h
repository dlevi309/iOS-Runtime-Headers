/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UIBarButtonItem.h>

@class SFDownloadsBarButtonItemView;

@interface SFDownloadsBarButtonItem : UIBarButtonItem {

	SFDownloadsBarButtonItemView* _buttonView;
	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(double)progress;
-(void)pulse;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setProgress:(double)arg1 ;
@end

