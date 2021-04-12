/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKCollectionElement.h>

@class IKAppMenuBarDocument;

@interface IKMenuBarElement : IKCollectionElement {

	IKAppMenuBarDocument* _menuBarDocument;

}

@property (nonatomic,readonly) IKAppMenuBarDocument * menuBarDocument;              //@synthesize menuBarDocument=_menuBarDocument - In the implementation block
+(id)supportedFeatures;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(IKAppMenuBarDocument *)menuBarDocument;
@end

