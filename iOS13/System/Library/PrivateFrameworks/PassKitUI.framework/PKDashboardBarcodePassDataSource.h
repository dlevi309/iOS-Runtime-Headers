/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKSecureElementObserver.h>
#import <libobjc.A.dylib/PKDashboardPassDataSource.h>

@protocol PKDashboardDataSourceDelegate;
@class PKPassGroupView, PKGroup, NSString;

@interface PKDashboardBarcodePassDataSource : NSObject <PKSecureElementObserver, PKDashboardPassDataSource> {

	PKPassGroupView* _groupView;
	PKGroup* _group;
	id<PKDashboardDataSourceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reloadData;
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)titleForSection:(unsigned long long)arg1 ;
-(void)setDataSourceDelegate:(id)arg1 ;
-(void)sendContentIsLoadedIfNecessary;
-(id)footerTextForSection:(unsigned long long)arg1 ;
-(id)initWithGroupView:(id)arg1 context:(id)arg2 ;
-(void)groupViewDidUpdatePassView:(id)arg1 ;
-(void)groupViewDidChangeFrontmostPassView:(id)arg1 withContext:(id)arg2 ;
@end

