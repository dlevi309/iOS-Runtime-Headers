/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)boolValue;
-(NSString *)stringValue;
-(double)numericValue;
-(NSNumber *)numberValue;
-(xmlXPathObject*)xmlXPath;
-(void)setXmlXPath:(xmlXPathObject*)arg1 ;
@end

