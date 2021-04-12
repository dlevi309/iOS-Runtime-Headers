/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray, _UIDictionaryManager, NSMutableDictionary;

@interface _UIRemoteDictionaryViewController : UITableViewController {

	NSArray* _availableDictionaries;
	_UIDictionaryManager* _dictionaryAssetManager;
	NSMutableDictionary* _downloadingAssets;

}

@property (nonatomic,retain) _UIDictionaryManager * dictionaryAssetManager;              //@synthesize dictionaryAssetManager=_dictionaryAssetManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * downloadingAssets;                    //@synthesize downloadingAssets=_downloadingAssets - In the implementation block
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSMutableDictionary *)downloadingAssets;
-(void)_handleDownloadButton:(id)arg1 ;
-(_UIDictionaryManager *)dictionaryAssetManager;
-(void)viewDidLoad;
-(id)_cloudBackgroundImage;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)_downloadArrowImage;
-(void)setDownloadingAssets:(NSMutableDictionary *)arg1 ;
-(id)_downloadButton;
-(id)_downloadImageWithTintColor:(id)arg1 ;
-(void)_startDownloadForDictionary:(id)arg1 ;
-(void)setDictionaryAssetManager:(_UIDictionaryManager *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
@end

