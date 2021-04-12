/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface PBBridgeProgressView : UIView {

	double _currentProgress;
	UIImageView* _appleLogo;
	unsigned long long _style;
	unsigned long long _version;

}

@property (nonatomic,retain) UIImageView * appleLogo;                 //@synthesize appleLogo=_appleLogo - In the implementation block
@property (assign,nonatomic) unsigned long long style;                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) double currentProgress;                  //@synthesize currentProgress=_currentProgress - In the implementation block
-(CGSize)_size;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)setCurrentProgress:(double)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)currentProgress;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(unsigned long long)style;
-(double)_tickLength;
-(id)initWithStyle:(unsigned long long)arg1 andVersion:(unsigned long long)arg2 ;
-(UIImageView *)appleLogo;
-(void)setAppleLogo:(UIImageView *)arg1 ;
@end

