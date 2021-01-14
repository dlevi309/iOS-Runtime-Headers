/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIIndexBarEntryListControllerDelegate;
@class NSString, SKUIViewElement;

@interface SKUIIndexBarEntryListController : NSObject {

	BOOL _needsRootTargetViewElement;
	BOOL _hidesIndexBar;
	id<SKUIIndexBarEntryListControllerDelegate> _delegate;
	NSString* _rootTargetIndexBarEntryID;
	SKUIViewElement* _rootTargetViewElement;
	long long _numberOfEntryDescriptors;

}

@property (assign,nonatomic,__weak) id<SKUIIndexBarEntryListControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL needsRootTargetViewElement;                                        //@synthesize needsRootTargetViewElement=_needsRootTargetViewElement - In the implementation block
@property (nonatomic,readonly) BOOL hidesIndexBar;                                                     //@synthesize hidesIndexBar=_hidesIndexBar - In the implementation block
@property (nonatomic,readonly) NSString * rootTargetIndexBarEntryID;                                   //@synthesize rootTargetIndexBarEntryID=_rootTargetIndexBarEntryID - In the implementation block
@property (nonatomic,retain) SKUIViewElement * rootTargetViewElement;                                  //@synthesize rootTargetViewElement=_rootTargetViewElement - In the implementation block
@property (nonatomic,readonly) long long numberOfEntryDescriptors;                                     //@synthesize numberOfEntryDescriptors=_numberOfEntryDescriptors - In the implementation block
+(id)entryListControllerForEntryViewElement:(id)arg1 ;
+(id)entryListControllerForEntryListViewElement:(id)arg1 ;
-(id<SKUIIndexBarEntryListControllerDelegate>)delegate;
-(void)setDelegate:(id<SKUIIndexBarEntryListControllerDelegate>)arg1 ;
-(void)_didInvalidate;
-(id)entryDescriptorAtIndex:(long long)arg1 ;
-(long long)numberOfEntryDescriptors;
-(BOOL)hidesIndexBar;
-(id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long*)arg2 ;
-(BOOL)needsRootTargetViewElement;
-(NSString *)rootTargetIndexBarEntryID;
-(void)setRootTargetViewElement:(SKUIViewElement *)arg1 ;
-(void)reloadViewElementData;
-(SKUIViewElement *)rootTargetViewElement;
@end

