/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <UIKitCore/UITableViewDiffableDataSource.h>

@protocol MRUDiffableDataSourceDelegate;
@interface MRUDiffableDataSource : UITableViewDiffableDataSource {

	BOOL _supportsReordering;
	BOOL _supportsEditing;
	id<MRUDiffableDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MRUDiffableDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL supportsReordering;                                        //@synthesize supportsReordering=_supportsReordering - In the implementation block
@property (assign,nonatomic) BOOL supportsEditing;                                           //@synthesize supportsEditing=_supportsEditing - In the implementation block
-(id<MRUDiffableDataSourceDelegate>)delegate;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)setDelegate:(id<MRUDiffableDataSourceDelegate>)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setSupportsEditing:(BOOL)arg1 ;
-(void)setSupportsReordering:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)supportsEditing;
-(BOOL)supportsReordering;
@end

