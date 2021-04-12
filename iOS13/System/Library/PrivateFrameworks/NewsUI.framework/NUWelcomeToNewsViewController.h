/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/NUPageable.h>

@protocol NULoadingDelegate, NURouter;
@class NUCanvas, NUViewNode, NSString;

@interface NUWelcomeToNewsViewController : UIViewController <NUPageable> {

	id<NULoadingDelegate> _loadingDelegate;
	NUCanvas* _canvas;
	NUViewNode* _appIconImageViewNode;
	NUViewNode* _titleLabelNode;
	NUViewNode* _descriptionLabelNode;
	NUViewNode* _readMoreButtonNode;
	id<NURouter> _router;

}

@property (nonatomic,retain) NUCanvas * canvas;                                         //@synthesize canvas=_canvas - In the implementation block
@property (nonatomic,readonly) NUViewNode * appIconImageViewNode;                       //@synthesize appIconImageViewNode=_appIconImageViewNode - In the implementation block
@property (nonatomic,readonly) NUViewNode * titleLabelNode;                             //@synthesize titleLabelNode=_titleLabelNode - In the implementation block
@property (nonatomic,readonly) NUViewNode * descriptionLabelNode;                       //@synthesize descriptionLabelNode=_descriptionLabelNode - In the implementation block
@property (nonatomic,readonly) NUViewNode * readMoreButtonNode;                         //@synthesize readMoreButtonNode=_readMoreButtonNode - In the implementation block
@property (nonatomic,readonly) id<NURouter> router;                                     //@synthesize router=_router - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NULoadingDelegate> loadingDelegate;              //@synthesize loadingDelegate=_loadingDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageIdentifier; 
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(NUCanvas *)canvas;
-(void)setCanvas:(NUCanvas *)arg1 ;
-(NSString *)pageIdentifier;
-(id<NURouter>)router;
-(id<NULoadingDelegate>)loadingDelegate;
-(void)setLoadingDelegate:(id<NULoadingDelegate>)arg1 ;
-(id)buildCanvas;
-(NUViewNode *)titleLabelNode;
-(void)doReadMoreNews:(id)arg1 ;
-(NUViewNode *)appIconImageViewNode;
-(NUViewNode *)descriptionLabelNode;
-(NUViewNode *)readMoreButtonNode;
-(id)initWithRouter:(id)arg1 ;
@end

