/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UITableViewDiffableDataSource.h>

@protocol _SFTableViewDiffableDataSourceDelegate;
@interface _SFTableViewDiffableDataSource : UITableViewDiffableDataSource {

	id<_SFTableViewDiffableDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFTableViewDiffableDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<_SFTableViewDiffableDataSourceDelegate>)delegate;
-(void)setDelegate:(id<_SFTableViewDiffableDataSourceDelegate>)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
@end

