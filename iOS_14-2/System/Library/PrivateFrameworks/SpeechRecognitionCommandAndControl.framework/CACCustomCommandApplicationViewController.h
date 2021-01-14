/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <UIKitCore/UITableViewController.h>

@protocol CACCustomCommandApplicationViewControllerDelegate;
@class CACSpokenCommandItem, NSDictionary, NSArray;

@interface CACCustomCommandApplicationViewController : UITableViewController {

	id<CACCustomCommandApplicationViewControllerDelegate> _delegate;
	CACSpokenCommandItem* _commandItem;
	NSDictionary* _applicationIdentifiersToNames;
	NSArray* _sortedNames;
	NSArray* _sortedIdentifiers;

}

@property (nonatomic,retain) NSArray * sortedNames;                                                              //@synthesize sortedNames=_sortedNames - In the implementation block
@property (nonatomic,retain) NSArray * sortedIdentifiers;                                                        //@synthesize sortedIdentifiers=_sortedIdentifiers - In the implementation block
@property (assign,nonatomic,__weak) id<CACCustomCommandApplicationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CACSpokenCommandItem * commandItem;                                                 //@synthesize commandItem=_commandItem - In the implementation block
@property (nonatomic,retain) NSDictionary * applicationIdentifiersToNames;                                       //@synthesize applicationIdentifiersToNames=_applicationIdentifiersToNames - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id<CACCustomCommandApplicationViewControllerDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<CACCustomCommandApplicationViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(BOOL)isModalInPresentation;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSArray *)sortedNames;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CACSpokenCommandItem *)commandItem;
-(void)setCommandItem:(CACSpokenCommandItem *)arg1 ;
-(NSDictionary *)applicationIdentifiersToNames;
-(void)setApplicationIdentifiersToNames:(NSDictionary *)arg1 ;
-(void)setSortedIdentifiers:(NSArray *)arg1 ;
-(NSArray *)sortedIdentifiers;
-(void)setSortedNames:(NSArray *)arg1 ;
@end

