/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXContextMenuProviding.h>

@protocol SXActionManager;
@class SXTangierController, NSString;

@interface SXTextContextMenuProvider : NSObject <SXContextMenuProviding> {

	SXTangierController* _tangierController;
	id<SXActionManager> _actionManager;

}

@property (nonatomic,readonly) SXTangierController * tangierController;              //@synthesize tangierController=_tangierController - In the implementation block
@property (nonatomic,readonly) id<SXActionManager> actionManager;                    //@synthesize actionManager=_actionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXTangierController *)tangierController;
-(id<SXActionManager>)actionManager;
-(void)commitPreviewViewController:(id)arg1 ;
-(void)repAndHyperlinkAtLocation:(CGPoint)arg1 viewport:(id)arg2 block:(/*^block*/id)arg3 ;
-(CGRect)viewportRectForLinkInRep:(id)arg1 range:(NSRange)arg2 viewport:(id)arg3 ;
-(id)contextMenuAtLocation:(CGPoint)arg1 viewport:(id)arg2 ;
-(id)targetedPreviewAtLocation:(CGPoint)arg1 viewport:(id)arg2 ;
-(id)initWithTangierController:(id)arg1 actionManager:(id)arg2 ;
@end

