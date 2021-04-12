/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMHTMLCollection.h>

@class IKDOMNode;

@interface IKDOMHTMLCollection : IKJSObject <IKJSDOMHTMLCollection> {

	IKDOMNode* _parentNode;

}

@property (assign,nonatomic,__weak) IKDOMNode * parentNode;              //@synthesize parentNode=_parentNode - In the implementation block
@property (readonly) unsigned long long length; 
-(unsigned long long)length;
-(IKDOMNode *)parentNode;
-(void)setParentNode:(IKDOMNode *)arg1 ;
-(id)item:(unsigned long long)arg1 ;
-(id)initWithAppContext:(id)arg1 node:(id)arg2 ;
@end

