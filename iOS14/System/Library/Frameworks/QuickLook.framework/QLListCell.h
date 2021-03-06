/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <UIKitCore/UITableViewCell.h>

@class NSLayoutConstraint, UILabel, UIImageView, QLItem, NSString, UIImage;

@interface QLListCell : UITableViewCell {

	NSLayoutConstraint* _leftConstraint;
	UILabel* _title;
	UILabel* _subtitle;
	UIImageView* _thumbnailView;
	long long _loadingID;
	QLItem* _item;
	NSString* _folderName;
	long long _fileDepthLevel;
	NSString* _subtitleString;
	UIImage* _thumbnail;
	unsigned long long _row;

}

@property (nonatomic,retain) QLItem * item;                         //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSString * folderName;                 //@synthesize folderName=_folderName - In the implementation block
@property (assign,nonatomic) long long fileDepthLevel;              //@synthesize fileDepthLevel=_fileDepthLevel - In the implementation block
@property (nonatomic,copy) NSString * subtitleString;               //@synthesize subtitleString=_subtitleString - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                   //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign) unsigned long long row;                          //@synthesize row=_row - In the implementation block
+(id)listCell;
-(UIImage *)thumbnail;
-(unsigned long long)row;
-(QLItem *)item;
-(NSString *)subtitleString;
-(void)prepareForReuse;
-(void)setRow:(unsigned long long)arg1 ;
-(void)setItem:(QLItem *)arg1 ;
-(void)setFileDepthLevel:(long long)arg1 ;
-(void)awakeFromNib;
-(NSString *)folderName;
-(id)_folderImage;
-(long long)fileDepthLevel;
-(void)setThumbnail:(UIImage *)arg1 ;
-(void)setFolderName:(NSString *)arg1 ;
-(void)setSubtitleString:(NSString *)arg1 ;
@end

