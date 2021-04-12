/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosExtrasElementViewController.h>

@class IKViewElement;

@interface VideosExtrasViewElementViewController : VideosExtrasElementViewController {

	BOOL _embedded;
	IKViewElement* _viewElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;                       //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,readonly) BOOL matchParentHeight; 
@property (assign,nonatomic) BOOL embedded;                                     //@synthesize embedded=_embedded - In the implementation block
@property (nonatomic,readonly) id preferredLayoutGuide; 
@property (nonatomic,readonly) long long preferredLayoutAttribute; 
-(void)viewDidLoad;
-(void)setEmbedded:(BOOL)arg1 ;
-(IKViewElement *)viewElement;
-(id)initWithViewElement:(id)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(BOOL)matchParentHeight;
-(BOOL)embedded;
-(id)preferredLayoutGuide;
-(long long)preferredLayoutAttribute;
@end

