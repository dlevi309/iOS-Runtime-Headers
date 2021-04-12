/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSMenuBarDocument.h>

@protocol IKJSMenuBarDocument <JSExport>
@required
-(id)getDocument:(id)arg1;
-(void)setDocument:(id)arg1 :(id)arg2 :(id)arg3;
-(id)getSelectedItem;
-(void)setSelectedItem:(id)arg1 :(id)arg2;

@end


@protocol IKJSMenuBarDocumentAppBridge;
@interface IKJSMenuBarDocument : IKJSObject <IKJSMenuBarDocument> {

	id<IKJSMenuBarDocumentAppBridge> _appBridge;

}

@property (assign,nonatomic,__weak) id<IKJSMenuBarDocumentAppBridge> appBridge;              //@synthesize appBridge=_appBridge - In the implementation block
-(void)setAppBridge:(id<IKJSMenuBarDocumentAppBridge>)arg1 ;
-(id<IKJSMenuBarDocumentAppBridge>)appBridge;
-(id)_entityUniqueIdentifierForObject:(id)arg1 ;
-(id)getDocument:(id)arg1 ;
-(void)setDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)getSelectedItem;
-(void)setSelectedItem:(id)arg1 :(id)arg2 ;
@end

