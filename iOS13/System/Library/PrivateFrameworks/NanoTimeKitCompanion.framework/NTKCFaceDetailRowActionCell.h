/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class NTKCSeparatorView;

@interface NTKCFaceDetailRowActionCell : NTKCDetailTableViewCell {

	NTKCSeparatorView* _topSeparator;
	BOOL _showsTopSeparator;

}

@property (assign,nonatomic) BOOL showsTopSeparator;              //@synthesize showsTopSeparator=_showsTopSeparator - In the implementation block
+(id)reuseIdentifier;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(double)rowHeight;
-(void)setShowsTopSeparator:(BOOL)arg1 ;
-(BOOL)showsTopSeparator;
@end

