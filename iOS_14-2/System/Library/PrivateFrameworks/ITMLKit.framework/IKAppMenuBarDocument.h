/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKJSMenuBarDocumentAppBridge.h>
#import <libobjc.A.dylib/IKDOMFeature.h>

@protocol NSCopying, IKAppMenuBarDocumentDelegate;
@class IKDOMNode, NSMutableDictionary, IKAppContext, NSString, IKViewElement;

@interface IKAppMenuBarDocument : NSObject <IKJSMenuBarDocumentAppBridge, IKDOMFeature> {

	IKDOMNode* _parentDOMNode;
	NSMutableDictionary* _jsDocumentsByEntityUniqueIdentifier;
	NSMutableDictionary* _documentsByEntityUniqueIdentifier;
	NSMutableDictionary* _documentOptionsByEntityUniqueIdentifier;
	id<NSCopying> _selectedEntityUniqueIdentifier;
	IKAppContext* _appContext;
	NSString* _featureName;
	id<IKAppMenuBarDocumentDelegate> _delegate;
	IKViewElement* _menuBarElement;

}

@property (assign,nonatomic,__weak) IKViewElement * menuBarElement;                         //@synthesize menuBarElement=_menuBarElement - In the implementation block
@property (assign,nonatomic,__weak) id<IKAppMenuBarDocumentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IKViewElement * selectedMenuItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                 //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                            //@synthesize appContext=_appContext - In the implementation block
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(id<IKAppMenuBarDocumentDelegate>)delegate;
-(void)setDelegate:(id<IKAppMenuBarDocumentDelegate>)arg1 ;
-(IKAppContext *)appContext;
-(NSString *)featureName;
-(IKViewElement *)selectedMenuItem;
-(id)documentForEntityUniqueIdentifier:(id)arg1 ;
-(id)documentForMenuItem:(id)arg1 ;
-(id)documentOptionsForEntityUniqueIdentifier:(id)arg1 ;
-(id)documentOptionsForMenuItem:(id)arg1 ;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(void)migrateToViewElement:(id)arg1 ;
-(void)_evaluateDelegateBlockSync:(/*^block*/id)arg1 ;
-(id)jsMenuBarDocument:(id)arg1 documentForEntityUniqueIdentifier:(id)arg2 ;
-(void)jsMenuBarDocument:(id)arg1 setDocument:(id)arg2 forEntityUniqueIdentifier:(id)arg3 withOptions:(id)arg4 ;
-(id)selectedItemForJsMenuBarDocument:(id)arg1 ;
-(void)jsMenuBarDocument:(id)arg1 setSelectedEntityUniqueIdentifier:(id)arg2 withOptions:(id)arg3 ;
-(id)_menuItemElementForEntityUniqueIdentifier:(id)arg1 ;
-(void)setSelectedMenuItem:(IKViewElement *)arg1 ;
-(IKViewElement *)menuBarElement;
-(void)setMenuBarElement:(IKViewElement *)arg1 ;
@end

