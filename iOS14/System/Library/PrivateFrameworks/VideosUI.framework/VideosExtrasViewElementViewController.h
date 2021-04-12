/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)embedded;
-(void)setEmbedded:(BOOL)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(BOOL)matchParentHeight;
-(id)initWithViewElement:(id)arg1 ;
-(id)preferredLayoutGuide;
-(long long)preferredLayoutAttribute;
@end

