/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/

#import <StorageSettings/StorageSettings-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface STStorageProgressView : UIView {

	UIColor* _grayColor;
	UIColor* _blueColor;
	double _percent;

}

@property (assign,nonatomic) double percent;              //@synthesize percent=_percent - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)updateColors;
-(void)setPercent:(double)arg1 ;
-(double)percent;
@end

