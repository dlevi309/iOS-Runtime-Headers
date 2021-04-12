/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RUIElement.h>
#import <libobjc.A.dylib/RUIMultiChoiceActionHandler.h>

@class RUIMultiChoiceView, RUIObjectModel, NSString;

@interface RUIMultiChoiceElement : RUIElement <RUIMultiChoiceActionHandler> {

	RUIMultiChoiceView* _view;
	RUIObjectModel* _objectModel;

}

@property (nonatomic,retain) RUIMultiChoiceView * view;                        //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) RUIObjectModel * objectModel;              //@synthesize objectModel=_objectModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RUIMultiChoiceView *)view;
-(void)setView:(RUIMultiChoiceView *)arg1 ;
-(id)initWithAttributes:(id)arg1 parent:(id)arg2 ;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(RUIObjectModel *)objectModel;
-(void)addChoice:(id)arg1 ;
-(void)didTapChoice:(id)arg1 ;
-(double)estimatedViewHeight;
@end

