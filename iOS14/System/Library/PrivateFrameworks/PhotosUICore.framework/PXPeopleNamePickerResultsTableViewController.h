/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UITableViewController.h>

@class NSString, NSMutableArray, NSArray;

@interface PXPeopleNamePickerResultsTableViewController : UITableViewController {

	NSString* _personLocalIdentifier;
	NSMutableArray* _items;
	NSArray* _suggestedContacts;

}

@property (retain) NSString * personLocalIdentifier;              //@synthesize personLocalIdentifier=_personLocalIdentifier - In the implementation block
@property (retain) NSMutableArray * items;                        //@synthesize items=_items - In the implementation block
@property (retain) NSArray * suggestedContacts;                   //@synthesize suggestedContacts=_suggestedContacts - In the implementation block
@property (nonatomic,readonly) BOOL hasResults; 
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(NSString *)personLocalIdentifier;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSMutableArray *)items;
-(BOOL)hasResults;
-(id)personAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 personLocalIdentifier:(id)arg2 suggestedContacts:(id)arg3 ;
-(void)updateItemsForSearchString:(id)arg1 ;
-(id)contactAtIndexPath:(id)arg1 ;
-(void)setPersonLocalIdentifier:(NSString *)arg1 ;
-(void)setSuggestedContacts:(NSArray *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSArray *)suggestedContacts;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

