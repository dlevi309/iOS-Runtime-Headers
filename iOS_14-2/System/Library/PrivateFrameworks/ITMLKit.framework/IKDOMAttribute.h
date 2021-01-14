/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)nodeType;
-(id)nextSibling;
-(id)previousSibling;
-(id)appendChild:(id)arg1 ;
-(BOOL)hasChildNodes;
-(NSString *)name;
-(id)nodeName;
-(id)lastChild;
-(id)textContent;
-(id)firstChild;
-(id)removeChild:(id)arg1 ;
-(id)childNodes;
-(id)nodeValue;
-(BOOL)dispatchEvent:(id)arg1 ;
-(NSString *)value;
-(IKDOMNode *)ownerElement;
-(void)addEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3 ;
-(void)removeEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3 ;
-(id)cloneNode:(BOOL)arg1 ;
-(id)insertBefore:(id)arg1 :(id)arg2 ;
-(id)replaceChild:(id)arg1 :(id)arg2 ;
-(id)initWithAppContext:(id)arg1 xmlNode:(xmlNode*)arg2 ;
-(id)getFeature:(id)arg1 :(id)arg2 ;
@end

