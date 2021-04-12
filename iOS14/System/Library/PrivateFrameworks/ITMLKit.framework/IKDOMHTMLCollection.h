/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)item:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(void)setParentNode:(IKDOMNode *)arg1 ;
-(IKDOMNode *)parentNode;
-(id)initWithAppContext:(id)arg1 node:(id)arg2 ;
@end

