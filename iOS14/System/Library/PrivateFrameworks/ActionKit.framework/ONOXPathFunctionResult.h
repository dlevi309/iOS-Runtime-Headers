/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSNumber, NSString;

@interface ONOXPathFunctionResult : NSObject {

	xmlXPathObject* _xmlXPath;

}

@property (assign,nonatomic) xmlXPathObject* xmlXPath;                   //@synthesize xmlXPath=_xmlXPath - In the implementation block
@property (nonatomic,readonly) BOOL boolValue; 
@property (nonatomic,readonly) double numericValue; 
@property (nonatomic,copy,readonly) NSNumber * numberValue; 
@property (nonatomic,copy,readonly) NSString * stringValue; 
-(NSNumber *)numberValue;
-(BOOL)boolValue;
-(NSString *)stringValue;
-(void)dealloc;
-(double)numericValue;
-(xmlXPathObject*)xmlXPath;
-(void)setXmlXPath:(xmlXPathObject*)arg1 ;
@end

