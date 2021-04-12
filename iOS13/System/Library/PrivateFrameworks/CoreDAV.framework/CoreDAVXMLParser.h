/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <Foundation/NSXMLParser.h>
#import <CoreDAV/CoreDAVResponseBodyParser.h>

@class CoreDAVXMLElementGenerator, NSSet, NSURL, CoreDAVItem, CoreDAVErrorItem, NSString, NSError;

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser> {

	CoreDAVXMLElementGenerator* _rootElementGenerator;
	CoreDAVXMLElementGenerator* _rootErrorGenerator;
	NSSet* _parseHints;
	NSURL* _baseURL;

}

@property (nonatomic,retain) CoreDAVXMLElementGenerator * rootElementGenerator;              //@synthesize rootElementGenerator=_rootElementGenerator - In the implementation block
@property (nonatomic,retain) CoreDAVXMLElementGenerator * rootErrorGenerator;                //@synthesize rootErrorGenerator=_rootErrorGenerator - In the implementation block
@property (nonatomic,retain) NSSet * parseHints;                                             //@synthesize parseHints=_parseHints - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                                //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) CoreDAVItem * rootElement; 
@property (nonatomic,readonly) CoreDAVErrorItem * rootError; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSError * parserError; 
+(BOOL)canHandleContentType:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(CoreDAVItem *)rootElement;
-(id)initWithRootElementNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 baseURL:(id)arg4 ;
-(BOOL)processData:(id)arg1 forTask:(id)arg2 ;
-(void)setParseHints:(NSSet *)arg1 ;
-(CoreDAVErrorItem *)rootError;
-(NSSet *)parseHints;
-(CoreDAVXMLElementGenerator *)rootErrorGenerator;
-(void)setRootErrorGenerator:(CoreDAVXMLElementGenerator *)arg1 ;
-(void)setRootElementGenerator:(CoreDAVXMLElementGenerator *)arg1 ;
-(CoreDAVXMLElementGenerator *)rootElementGenerator;
@end

