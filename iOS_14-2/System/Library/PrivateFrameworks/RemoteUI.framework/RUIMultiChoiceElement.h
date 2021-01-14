/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(RUIObjectModel *)objectModel;
-(void)setView:(RUIMultiChoiceView *)arg1 ;
-(RUIMultiChoiceView *)view;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(id)initWithAttributes:(id)arg1 parent:(id)arg2 ;
-(void)addChoice:(id)arg1 ;
-(void)startActivityIndicatorForChoice:(id)arg1 ;
-(void)stopActivityIndicatorForChoice:(id)arg1 ;
-(void)didTapChoice:(id)arg1 ;
-(double)estimatedViewHeight;
@end

