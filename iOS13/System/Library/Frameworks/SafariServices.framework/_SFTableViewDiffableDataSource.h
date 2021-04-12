/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewDiffableDataSource.h>

@protocol _SFTableViewDiffableDataSourceDelegate;
@interface _SFTableViewDiffableDataSource : UITableViewDiffableDataSource {

	id<_SFTableViewDiffableDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFTableViewDiffableDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_SFTableViewDiffableDataSourceDelegate>)delegate;
-(void)setDelegate:(id<_SFTableViewDiffableDataSourceDelegate>)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
@end

