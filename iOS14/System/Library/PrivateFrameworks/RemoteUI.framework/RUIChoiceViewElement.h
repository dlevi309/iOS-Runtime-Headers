/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RUIElement.h>
#import <libobjc.A.dylib/RUITopLevelPageElement.h>

@class RUIChoiceView, RUIElement, NSMutableArray, UIImage, RUIObjectModel, RUIPage, RUISubHeaderElement, NSArray, NSString;

@interface RUIChoiceViewElement : RUIElement <RUITopLevelPageElement> {

	RUIChoiceView* _view;
	RUIElement* _helpLinkElement;
	NSMutableArray* _choices;
	UIImage* _image;
	RUIObjectModel* _objectModel;
	RUIPage* _page;
	RUIElement* _header;
	RUISubHeaderElement* _subHeader;

}

@property (assign,nonatomic,__weak) RUIObjectModel * objectModel;              //@synthesize objectModel=_objectModel - In the implementation block
@property (assign,nonatomic,__weak) RUIPage * page;                            //@synthesize page=_page - In the implementation block
@property (nonatomic,retain) RUIElement * header;                              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) RUISubHeaderElement * subHeader;                  //@synthesize subHeader=_subHeader - In the implementation block
@property (nonatomic,retain) RUIElement * helpLinkElement;                     //@synthesize helpLinkElement=_helpLinkElement - In the implementation block
@property (nonatomic,readonly) NSArray * choices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)titleLabel;
-(void)setPage:(RUIPage *)arg1 ;
-(id)sourceURL;
-(RUIPage *)page;
-(void)setImage:(id)arg1 ;
-(void)setHeader:(RUIElement *)arg1 ;
-(RUIObjectModel *)objectModel;
-(RUIElement *)header;
-(void)setTitle:(id)arg1 ;
-(NSArray *)choices;
-(id)view;
-(void)setImageAlignment:(int)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(RUISubHeaderElement *)subHeader;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(void)choiceViewTappedHelpLink:(id)arg1 ;
-(void)choiceView:(id)arg1 tappedChoiceAtIndex:(unsigned long long)arg2 ;
-(void)setSubHeader:(RUISubHeaderElement *)arg1 ;
-(id)initWithAttributes:(id)arg1 parent:(id)arg2 ;
-(id)_bigChoiceColor;
-(id)_smallChoiceColor;
-(id)_choiceColorWithAttribute:(id)arg1 atIndex:(int)arg2 ;
-(void)setHelpLinkElement:(RUIElement *)arg1 ;
-(void)addChoiceElement:(id)arg1 ;
-(RUIElement *)helpLinkElement;
@end

