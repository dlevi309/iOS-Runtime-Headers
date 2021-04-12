/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString, IKDOMNamedNodeMap;


@protocol IKJSDOMElement <JSExport>
@property (nonatomic,retain,readonly) NSString * tagName; 
@property (nonatomic,copy,readonly) IKDOMNamedNodeMap * attributes; 
@required
-(IKDOMNamedNodeMap *)attributes;
-(NSString *)tagName;
-(id)getAttribute:(id)arg1;
-(id)getElementsByTagName:(id)arg1;
-(BOOL)hasAttributes;
-(BOOL)hasAttribute:(id)arg1;
-(void)removeAttribute:(id)arg1;
-(void)setAttribute:(id)arg1 :(id)arg2;

@end

