/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <libobjc.A.dylib/SFStartPageCollectionDataSource.h>
#import <libobjc.A.dylib/_SFStartPageDataSourceObserving.h>

@class SFStartPageCollectionViewController, _SFSectionModel, NSString;

@interface SFStartPageBookmarkFolderDataSource : NSObject <SFStartPageCollectionDataSource, _SFStartPageDataSourceObserving> {

	SFStartPageCollectionViewController* _collectionViewController;
	_SFSectionModel* _folder;
	/*^block*/id _reloadHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_reloadFolder;
-(void)reloadDataAnimatingDifferences:(BOOL)arg1 ;
-(id)sectionsForStartPageCollectionViewController:(id)arg1 ;
-(void)startPageCollectionViewController:(id)arg1 toggleSectionExpanded:(id)arg2 ;
-(BOOL)startPageCollectionViewController:(id)arg1 isSectionExpanded:(id)arg2 ;
-(id)titleForStartPageCollectionViewController:(id)arg1 ;
-(id)initWithReloadHandler:(/*^block*/id)arg1 ;
-(void)connectToViewController:(id)arg1 ;
@end

