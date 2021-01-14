/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NTKCDetailTableViewCell *)cell;
-(void)setSection:(long long)arg1 ;
-(void)setHeaderView:(NTKCFaceDetailSectionHeaderView *)arg1 ;
-(void)setCell:(NTKCDetailTableViewCell *)arg1 ;
-(void)setRows:(NSMutableArray *)arg1 ;
-(UITableView *)tableView;
-(NSString *)titleForHeader;
-(long long)numberOfRows;
-(long long)section;
-(NSMutableArray *)rows;
-(void)setFace:(NTKFace *)arg1 ;
-(id)_groupName;
-(UIViewController*<NTKCTableViewProviding>)tableViewController;
-(void)setTableViewController:(UIViewController*<NTKCTableViewProviding>)arg1 ;
-(NTKFace *)face;
-(BOOL)canSelectRow:(long long)arg1 ;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(void)_commonInit;
-(NTKCFaceDetailSectionHeaderView *)headerView;
-(void)setInGallery:(BOOL)arg1 ;
-(BOOL)inGallery;
-(BOOL)_canSelectRow:(long long)arg1 ;
-(void)didSelectRow:(long long)arg1 ;
-(id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 ;
-(void)setHasSpacerRow:(BOOL)arg1 ;
-(void)faceDidChange;
-(void)faceDidChangeResourceDirectory;
-(double)heightForHeaderView;
-(id)_newSectionHeader;
-(double)_heightForSpacerRow;
-(id)_spacerRow;
-(BOOL)hasSpacerRow;
@end

