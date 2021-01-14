/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKViewElement.h>

@class NSArray, IKAppBrowserBridge, IKHeaderElement;

@interface IKCollectionElement : IKViewElement {

	NSArray* _sections;
	IKAppBrowserBridge* _browserBridge;

}

@property (nonatomic,retain,readonly) IKHeaderElement * header; 
@property (nonatomic,retain,readonly) NSArray * sections; 
@property (nonatomic,readonly) IKAppBrowserBridge * browserBridge;              //@synthesize browserBridge=_browserBridge - In the implementation block
+(id)supportedFeaturesForElementName:(id)arg1 ;
-(IKHeaderElement *)header;
-(NSArray *)sections;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)appDocumentDidMarkStylesDirty;
-(IKAppBrowserBridge *)browserBridge;
@end

