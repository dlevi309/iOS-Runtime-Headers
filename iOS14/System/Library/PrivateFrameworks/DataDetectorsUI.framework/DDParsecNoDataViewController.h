/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <UIKitCore/UIViewController.h>

@class UIView, UILabel, NSString, NSURL;

@interface DDParsecNoDataViewController : UIViewController {

	UIView* _container;
	UILabel* _errorLabel;
	BOOL _inPlatter;
	NSString* _reason;
	NSString* _searchWebQuery;
	NSURL* _altURL;

}

@property (nonatomic,retain) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (retain) NSString * searchWebQuery;                //@synthesize searchWebQuery=_searchWebQuery - In the implementation block
@property (retain) NSURL * altURL;                           //@synthesize altURL=_altURL - In the implementation block
@property (assign,nonatomic) BOOL inPlatter;                 //@synthesize inPlatter=_inPlatter - In the implementation block
-(NSURL *)altURL;
-(BOOL)_canShowWhileLocked;
-(NSString *)reason;
-(void)loadView;
-(void)setReason:(NSString *)arg1 ;
-(void)searchWeb:(id)arg1 ;
-(id)manageDictionariesURL;
-(void)manageDictionaries:(id)arg1 ;
-(NSString *)searchWebQuery;
-(void)setInPlatter:(BOOL)arg1 ;
-(void)setSearchWebQuery:(NSString *)arg1 ;
-(void)setAltURL:(NSURL *)arg1 ;
-(BOOL)inPlatter;
@end

