/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSXMLParser, NSMutableDictionary, NSString, NSDictionary;

@interface TBXMLHelper : NSObject <NSXMLParserDelegate> {

	NSXMLParser* _parser;
	NSMutableDictionary* _settings;
	BOOL _interested;
	BOOL _successfullyEndedParsing;
	NSString* _key;
	int _depth;

}

@property (nonatomic,readonly) NSDictionary * sceneSettings;              //@synthesize settings=_settings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(BOOL)parse;
-(NSDictionary *)sceneSettings;
@end

