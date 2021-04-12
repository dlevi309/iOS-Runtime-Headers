/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
*/

#import <NanoMediaBridgeUI/NanoMediaBridgeUI-Structs.h>
#import <Preferences/PSSwitchTableCell.h>

@class UIStackView, NMBUIDownloadProgressView, UIButton;

@interface NMBUIMediaTableCell : PSSwitchTableCell {

	UIStackView* _accessoryStackView;
	NMBUIDownloadProgressView* _downloadProgressView;
	UIButton* _errorButton;

}
+(long long)cellStyle;
+(double)defaultCellHeight;
+(CGSize)artworkSize;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setDownloadState:(unsigned long long)arg1 progress:(double)arg2 ;
-(id)downloadProgressView;
-(void)setDownloadState:(unsigned long long)arg1 progress:(double)arg2 animated:(BOOL)arg3 ;
@end

