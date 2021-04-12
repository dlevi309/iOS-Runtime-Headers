/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableArray, NSString, NSMutableDictionary;

@interface _HKXMLExtractor : NSObject <NSXMLParserDelegate> {

	NSMutableArray* _allTagSpecifications;
	NSMutableArray* _stackOfElements;
	NSString* _matchedTagSpecification;
	NSMutableDictionary* _resultTagContent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)addTagSpecificationForExtraction:(id)arg1 ;
-(void)parseWithData:(id)arg1 ;
-(id)getDataForTagSpecification:(id)arg1 ;
-(void)parseWithStream:(id)arg1 ;
-(void)_parseWithXMLParser:(id)arg1 ;
-(void)_resetScanningState;
-(id)_matchSpecificationWithAttributes:(id)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
@end

