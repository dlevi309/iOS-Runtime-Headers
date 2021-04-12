/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVAccessoryItem.h>
@class UIView;


@protocol SVAccessoryItem <NSObject>
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic) unsigned long long displayMode; 
@optional
-(void)willTransitionToDisplayMode:(unsigned long long)arg1 withTransitionCoordinator:(id)arg2;

@required
-(UIView *)view;
-(unsigned long long)displayMode;
-(void)setDisplayMode:(unsigned long long)arg1;

@end


@class UIView, NSString;

@interface SVAccessoryItem : NSObject <SVAccessoryItem> {

	UIView* _view;
	unsigned long long _displayMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view;                             //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) unsigned long long displayMode;              //@synthesize displayMode=_displayMode - In the implementation block
-(UIView *)view;
-(id)initWithView:(id)arg1 ;
-(unsigned long long)displayMode;
-(void)setDisplayMode:(unsigned long long)arg1 ;
@end

