/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)commitPreviewViewController:(id)arg1 ;
-(id<SXActionManager>)actionManager;
-(SXTangierController *)tangierController;
-(id)contextMenuAtLocation:(CGPoint)arg1 viewport:(id)arg2 ;
-(id)initWithTangierController:(id)arg1 actionManager:(id)arg2 ;
@end

