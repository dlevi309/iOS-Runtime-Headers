/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
@interface XMLNode : NSObject {

	xmlNode* _xmlNode;

}
+(id)stringValueForAttribute:(id)arg1 inNode:(xmlNode*)arg2 ;
+(id)getJavascriptFromNode:(xmlNode*)arg1 ;
-(void)dealloc;
-(id)initWithNode:(xmlNode*)arg1 ;
-(id)_stringValueFromAttribute:(id)arg1 ;
-(long long)_intValueFromAttribute:(id)arg1 ;
-(void)setXmlNode:(xmlNode*)arg1 ;
-(xmlNode*)xmlNode;
@end

