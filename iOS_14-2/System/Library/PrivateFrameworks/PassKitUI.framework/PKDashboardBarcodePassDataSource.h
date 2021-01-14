/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfSections;
-(void)reloadData;
-(id)titleForSection:(unsigned long long)arg1 ;
-(id)initWithGroupView:(id)arg1 context:(id)arg2 ;
-(void)sendContentIsLoadedIfNecessary;
-(id)footerTextItemForSection:(unsigned long long)arg1 ;
-(void)setDataSourceDelegate:(id)arg1 ;
-(void)groupViewDidUpdatePassView:(id)arg1 ;
-(void)groupViewDidChangeFrontmostPassView:(id)arg1 withContext:(id)arg2 ;
-(void)dealloc;
@end

