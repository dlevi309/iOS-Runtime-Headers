/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class VUIDocumentDataSource, VUIAction;

@interface VUIEventDataSource : NSObject {

	VUIDocumentDataSource* _preActionDocumentDataSource;
	VUIAction* _preAction;
	VUIDocumentDataSource* _documentDataSource;
	VUIAction* _action;
	VUIDocumentDataSource* _postActionDocumentDataSource;
	VUIAction* _postAction;

}

@property (nonatomic,retain) VUIDocumentDataSource * preActionDocumentDataSource;               //@synthesize preActionDocumentDataSource=_preActionDocumentDataSource - In the implementation block
@property (nonatomic,retain) VUIAction * preAction;                                             //@synthesize preAction=_preAction - In the implementation block
@property (nonatomic,retain) VUIDocumentDataSource * documentDataSource;                        //@synthesize documentDataSource=_documentDataSource - In the implementation block
@property (nonatomic,retain) VUIAction * action;                                                //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) VUIDocumentDataSource * postActionDocumentDataSource;              //@synthesize postActionDocumentDataSource=_postActionDocumentDataSource - In the implementation block
@property (nonatomic,retain) VUIAction * postAction;                                            //@synthesize postAction=_postAction - In the implementation block
+(id)eventDataSourceWithEventDict:(id)arg1 viewElement:(id)arg2 appContext:(id)arg3 ;
+(id)attachPrefetchedDict:(id)arg1 eventDict:(id)arg2 ;
+(id)_documentDataSourceWithDict:(id)arg1 viewElement:(id)arg2 ;
+(id)_actionForKey:(id)arg1 eventDict:(id)arg2 viewElement:(id)arg3 appContext:(id)arg4 ;
-(VUIAction *)action;
-(void)setAction:(VUIAction *)arg1 ;
-(VUIDocumentDataSource *)preActionDocumentDataSource;
-(VUIAction *)preAction;
-(VUIDocumentDataSource *)documentDataSource;
-(VUIDocumentDataSource *)postActionDocumentDataSource;
-(VUIAction *)postAction;
-(void)setPreActionDocumentDataSource:(VUIDocumentDataSource *)arg1 ;
-(void)setPreAction:(VUIAction *)arg1 ;
-(void)setDocumentDataSource:(VUIDocumentDataSource *)arg1 ;
-(void)setPostActionDocumentDataSource:(VUIDocumentDataSource *)arg1 ;
-(void)setPostAction:(VUIAction *)arg1 ;
@end

