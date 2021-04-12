/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKCTableViewProviding;
@class NSString, NTKFace, UIViewController, NTKCDetailTableViewCell, NSMutableArray, NTKCFaceDetailSectionHeaderView, UITableView;

@interface NTKCFaceDetailSectionController : NSObject {

	BOOL _inGallery;
	BOOL _hasSpacerRow;
	long long _section;
	NSString* _titleForHeader;
	NTKFace* _face;
	UIViewController*<NTKCTableViewProviding> _tableViewController;
	NTKCDetailTableViewCell* _cell;
	NSMutableArray* _rows;
	NTKCFaceDetailSectionHeaderView* _headerView;

}

@property (assign,nonatomic,__weak) NTKFace * face;                                                             //@synthesize face=_face - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<NTKCTableViewProviding> tableViewController;              //@synthesize tableViewController=_tableViewController - In the implementation block
@property (assign,nonatomic) BOOL inGallery;                                                                    //@synthesize inGallery=_inGallery - In the implementation block
@property (nonatomic,retain) NTKCDetailTableViewCell * cell;                                                    //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSMutableArray * rows;                                                             //@synthesize rows=_rows - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailSectionHeaderView * headerView;                                      //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) long long section;                                                                 //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) long long numberOfRows; 
@property (nonatomic,readonly) NSString * titleForHeader;                                                       //@synthesize titleForHeader=_titleForHeader - In the implementation block
@property (nonatomic,__weak,readonly) UITableView * tableView; 
@property (assign,nonatomic) BOOL hasSpacerRow;                                                                 //@synthesize hasSpacerRow=_hasSpacerRow - In the implementation block
+(void)registerForTableView:(id)arg1 ;
-(void)setFace:(NTKFace *)arg1 ;
-(NTKFace *)face;
-(NSMutableArray *)rows;
-(void)setRows:(NSMutableArray *)arg1 ;
-(id)_groupName;
-(void)_commonInit;
-(long long)section;
-(long long)numberOfRows;
-(UITableView *)tableView;
-(NTKCFaceDetailSectionHeaderView *)headerView;
-(void)setHeaderView:(NTKCFaceDetailSectionHeaderView *)arg1 ;
-(NTKCDetailTableViewCell *)cell;
-(void)setSection:(long long)arg1 ;
-(void)setCell:(NTKCDetailTableViewCell *)arg1 ;
-(UIViewController*<NTKCTableViewProviding>)tableViewController;
-(void)setTableViewController:(UIViewController*<NTKCTableViewProviding>)arg1 ;
-(BOOL)canSelectRow:(long long)arg1 ;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(NSString *)titleForHeader;
-(void)faceDidChange;
-(void)didSelectRow:(long long)arg1 ;
-(BOOL)_canSelectRow:(long long)arg1 ;
-(void)setInGallery:(BOOL)arg1 ;
-(id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 ;
-(void)setHasSpacerRow:(BOOL)arg1 ;
-(void)faceDidChangeResourceDirectory;
-(double)heightForHeaderView;
-(BOOL)inGallery;
-(id)_newSectionHeader;
-(double)_heightForSpacerRow;
-(id)_spacerRow;
-(BOOL)hasSpacerRow;
@end

