/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSURL, NSString, NSDate, UIViewController, NSArray;


@protocol PXMutableMessagesExtensionViewModel <NSObject>
@property (nonatomic,retain) id<PXCMMSuggestion> selectedSuggestion; 
@property (nonatomic,retain) NSURL * selectedURL; 
@property (assign,nonatomic) unsigned long long selectedActivityType; 
@property (nonatomic,copy) NSString * selectedMessageText; 
@property (nonatomic,retain) NSDate * selectedMessageDate; 
@property (nonatomic,retain) UIViewController * presentedViewController; 
@property (nonatomic,copy) NSArray * recipients; 
@property (assign,nonatomic) BOOL drawerActive; 
@required
-(NSArray *)recipients;
-(void)setRecipients:(id)arg1;
-(NSURL *)selectedURL;
-(id<PXCMMSuggestion>)selectedSuggestion;
-(void)setSelectedSuggestion:(id)arg1;
-(void)setSelectedURL:(id)arg1;
-(unsigned long long)selectedActivityType;
-(void)setSelectedActivityType:(unsigned long long)arg1;
-(BOOL)drawerActive;
-(NSString *)selectedMessageText;
-(void)setSelectedMessageText:(id)arg1;
-(NSDate *)selectedMessageDate;
-(void)setSelectedMessageDate:(id)arg1;
-(void)setDrawerActive:(BOOL)arg1;
-(void)clearSelection;
-(void)setPresentedViewController:(id)arg1;
-(UIViewController *)presentedViewController;

@end

