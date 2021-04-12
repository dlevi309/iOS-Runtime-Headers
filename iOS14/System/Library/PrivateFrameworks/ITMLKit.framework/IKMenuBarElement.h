/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

