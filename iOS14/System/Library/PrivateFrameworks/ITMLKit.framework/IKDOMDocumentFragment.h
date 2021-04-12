/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKDOMNode.h>
#import <libobjc.A.dylib/IKJSDOMParentNode.h>

@class IKDOMHTMLCollection, IKDOMElement;

@interface IKDOMDocumentFragment : IKDOMNode <IKJSDOMParentNode>

@property (nonatomic,readonly) IKDOMHTMLCollection * children; 
@property (nonatomic,readonly) IKDOMElement * firstElementChild; 
@property (nonatomic,readonly) IKDOMElement * lastElementChild; 
@property (nonatomic,readonly) unsigned long long childElementCount; 
-(IKDOMHTMLCollection *)children;
-(long long)nodeType;
-(unsigned long long)childElementCount;
-(id)nodeName;
-(IKDOMElement *)firstElementChild;
-(IKDOMElement *)lastElementChild;
@end

