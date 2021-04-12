/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class IKDOMHTMLCollection, IKDOMElement;


@protocol IKJSDOMParentNode <JSExport>
@property (nonatomic,readonly) IKDOMHTMLCollection * children; 
@property (nonatomic,readonly) IKDOMElement * firstElementChild; 
@property (nonatomic,readonly) IKDOMElement * lastElementChild; 
@property (nonatomic,readonly) unsigned long long childElementCount; 
@required
-(IKDOMHTMLCollection *)children;
-(unsigned long long)childElementCount;
-(IKDOMElement *)firstElementChild;
-(IKDOMElement *)lastElementChild;

@end

