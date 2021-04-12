/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
@interface XMLNode : NSObject {

	xmlNode* _xmlNode;

}
+(id)stringValueForAttribute:(id)arg1 inNode:(xmlNode*)arg2 ;
+(id)getJavascriptFromNode:(xmlNode*)arg1 ;
-(id)initWithNode:(xmlNode*)arg1 ;
-(xmlNode*)xmlNode;
-(void)dealloc;
-(void)setXmlNode:(xmlNode*)arg1 ;
-(id)_stringValueFromAttribute:(id)arg1 ;
-(long long)_intValueFromAttribute:(id)arg1 ;
@end

