/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(CGSize)artworkSize;
+(double)defaultCellHeight;
+(long long)cellStyle;
-(void)setDownloadState:(unsigned long long)arg1 progress:(double)arg2 animated:(BOOL)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)prepareForReuse;
-(id)downloadProgressView;
-(void)setDownloadState:(unsigned long long)arg1 progress:(double)arg2 ;
@end

