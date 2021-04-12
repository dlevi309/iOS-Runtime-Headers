/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKDOMNode.h>
#import <libobjc.A.dylib/IKJSDOMAttribute.h>

@class NSString, IKDOMNode;

@interface IKDOMAttribute : IKDOMNode <IKJSDOMAttribute>

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) IKDOMNode * ownerElement; 
-(NSString *)name;
-(NSString *)value;
-(id)firstChild;
-(id)nextSibling;
-(long long)nodeType;
-(BOOL)hasChildNodes;
-(id)removeChild:(id)arg1 ;
-(id)appendChild:(id)arg1 ;
-(id)textContent;
-(id)lastChild;
-(id)childNodes;
-(id)previousSibling;
-(BOOL)dispatchEvent:(id)arg1 ;
-(id)nodeValue;
-(id)nodeName;
-(IKDOMNode *)ownerElement;
-(void)addEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3 ;
-(void)removeEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3 ;
-(id)cloneNode:(BOOL)arg1 ;
-(id)insertBefore:(id)arg1 :(id)arg2 ;
-(id)replaceChild:(id)arg1 :(id)arg2 ;
-(id)initWithAppContext:(id)arg1 xmlNode:(xmlNode*)arg2 ;
-(id)getFeature:(id)arg1 :(id)arg2 ;
@end

