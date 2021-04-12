/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSArray, VUIAction, NSString, NSDictionary;

@interface VUIOpenURLRouterDataSource : NSObject {

	BOOL _actionFirst;
	NSArray* _documentDataSources;
	VUIAction* _action;
	NSString* _tabIdentifier;
	NSDictionary* _localLibraryLink;
	NSString* _nativePageName;

}

@property (nonatomic,copy) NSArray * documentDataSources;                //@synthesize documentDataSources=_documentDataSources - In the implementation block
@property (nonatomic,retain) VUIAction * action;                         //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSString * tabIdentifier;                   //@synthesize tabIdentifier=_tabIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * localLibraryLink;              //@synthesize localLibraryLink=_localLibraryLink - In the implementation block
@property (nonatomic,retain) NSString * nativePageName;                  //@synthesize nativePageName=_nativePageName - In the implementation block
@property (assign,nonatomic) BOOL actionFirst;                           //@synthesize actionFirst=_actionFirst - In the implementation block
+(id)routerDataSourceWithDict:(id)arg1 appContext:(id)arg2 ;
-(VUIAction *)action;
-(void)setAction:(VUIAction *)arg1 ;
-(void)setTabIdentifier:(NSString *)arg1 ;
-(NSString *)tabIdentifier;
-(NSArray *)documentDataSources;
-(NSString *)nativePageName;
-(NSDictionary *)localLibraryLink;
-(BOOL)actionFirst;
-(void)setDocumentDataSources:(NSArray *)arg1 ;
-(void)setNativePageName:(NSString *)arg1 ;
-(void)setLocalLibraryLink:(NSDictionary *)arg1 ;
-(void)setActionFirst:(BOOL)arg1 ;
@end

