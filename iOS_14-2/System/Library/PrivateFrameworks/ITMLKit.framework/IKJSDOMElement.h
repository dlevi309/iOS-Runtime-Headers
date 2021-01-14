/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString, IKDOMNamedNodeMap;


@protocol IKJSDOMElement <JSExport>
@property (nonatomic,retain,readonly) NSString * tagName; 
@property (nonatomic,copy,readonly) IKDOMNamedNodeMap * attributes; 
@required
-(BOOL)hasAttributes;
-(NSString *)tagName;
-(IKDOMNamedNodeMap *)attributes;
-(id)getAttribute:(id)arg1;
-(id)getElementsByTagName:(id)arg1;
-(BOOL)hasAttribute:(id)arg1;
-(void)removeAttribute:(id)arg1;
-(void)setAttribute:(id)arg1 :(id)arg2;

@end

