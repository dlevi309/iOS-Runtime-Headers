/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableMessagesExtensionViewModel.h>

@protocol PXCMMSuggestion;
@class NSURL, NSString, NSDate, UIViewController, NSArray;

@interface PXMessagesExtensionViewModel : PXObservable <PXMutableMessagesExtensionViewModel> {

	BOOL _drawerActive;
	id<PXCMMSuggestion> _selectedSuggestion;
	NSURL* _selectedURL;
	unsigned long long _selectedActivityType;
	NSString* _selectedMessageText;
	NSDate* _selectedMessageDate;
	UIViewController* _presentedViewController;
	NSArray* _recipients;

}

@property (nonatomic,readonly) id<PXCMMSuggestion> selectedSuggestion;                  //@synthesize selectedSuggestion=_selectedSuggestion - In the implementation block
@property (nonatomic,readonly) NSURL * selectedURL;                                     //@synthesize selectedURL=_selectedURL - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedActivityType;                 //@synthesize selectedActivityType=_selectedActivityType - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedMessageText;                     //@synthesize selectedMessageText=_selectedMessageText - In the implementation block
@property (nonatomic,readonly) NSDate * selectedMessageDate;                            //@synthesize selectedMessageDate=_selectedMessageDate - In the implementation block
@property (nonatomic,readonly) UIViewController * presentedViewController;              //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipients;                               //@synthesize recipients=_recipients - In the implementation block
@property (getter=isDrawerActive,nonatomic,readonly) BOOL drawerActive;                 //@synthesize drawerActive=_drawerActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRootViewModel;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSURL *)selectedURL;
-(id<PXCMMSuggestion>)selectedSuggestion;
-(void)setSelectedSuggestion:(id<PXCMMSuggestion>)arg1 ;
-(void)setSelectedURL:(NSURL *)arg1 ;
-(unsigned long long)selectedActivityType;
-(void)setSelectedActivityType:(unsigned long long)arg1 ;
-(NSString *)selectedMessageText;
-(void)setSelectedMessageText:(NSString *)arg1 ;
-(NSDate *)selectedMessageDate;
-(void)setSelectedMessageDate:(NSDate *)arg1 ;
-(void)setDrawerActive:(BOOL)arg1 ;
-(BOOL)isDrawerActive;
-(void)clearSelection;
-(id)mutableChangeObject;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(UIViewController *)presentedViewController;
@end

