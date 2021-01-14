/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)drawRect:(CGRect)arg1 ;
-(void)updateColors;
-(double)percent;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setPercent:(double)arg1 ;
@end

