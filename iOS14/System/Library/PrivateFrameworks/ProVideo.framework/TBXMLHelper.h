/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)parse;
-(id)initWithContentsOfURL:(id)arg1 ;
-(NSDictionary *)sceneSettings;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)dealloc;
@end

