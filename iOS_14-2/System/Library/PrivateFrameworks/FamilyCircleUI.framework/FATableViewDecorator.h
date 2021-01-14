/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <FamilyCircleUI/FamilyCircleUI-Structs.h>
#import <libobjc.A.dylib/FATableViewProtocol.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol UITableViewDataSource, UITableViewDelegate, FATableViewProtocol;
@class NSString;

@interface FATableViewDecorator : NSObject <FATableViewProtocol, UITableViewDelegate, UITableViewDataSource> {

	id<UITableViewDataSource> _dataSource;
	id<UITableViewDelegate> _delegate;
	id<FATableViewProtocol> _tableView;

}

@property (nonatomic,retain) id<FATableViewProtocol> tableView;                        //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<UITableViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UITableViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id<UITableViewDelegate>)delegate;
-(id<FATableViewProtocol>)tableView;
-(id<UITableViewDataSource>)dataSource;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setDelegate:(id<UITableViewDelegate>)arg1 ;
-(void)setDataSource:(id<UITableViewDataSource>)arg1 ;
-(void)reloadData;
-(id)initWithTableView:(id)arg1 ;
-(void)setTableView:(id<FATableViewProtocol>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

