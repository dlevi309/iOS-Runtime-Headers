/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)rowHeight;
-(void)setShowsTopSeparator:(BOOL)arg1 ;
-(BOOL)showsTopSeparator;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

