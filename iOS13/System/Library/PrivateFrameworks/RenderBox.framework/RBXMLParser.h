/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/

#import <RenderBox/RenderBox-Structs.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@protocol RBXMLParserDelegate;
@class RBDisplayList, NSError, NSString;

@interface RBXMLParser : NSObject <NSXMLParserDelegate> {

	id<RBXMLParserDelegate> _delegate;
	objc_ptr<NSXMLParser *> _xml_parser;
	objc_ptr<NSURL *> _base_url;
	objc_ptr<RBDisplayList *> _list;
	objc_ptr<RBShape *> _shape;
	objc_ptr<RBFill *> _fill;
	objc_ptr<NSError *> _error;
	State* _state;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _characters;
	cf_ptr<__CFDictionary *>* _image_cache;
	cf_ptr<__CFDictionary *>* _font_cache;
	BOOL _aborted;
	CGSize _size;
	SCD_Struct_RB26 _backgroundColor;

}

@property (nonatomic,readonly) RBDisplayList * displayList; 
@property (nonatomic,readonly) CGSize size;                                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RB26 backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parserWithDelegate:(id)arg1 contentsOfURL:(id)arg2 options:(id)arg3 ;
-(void)dealloc;
-(CGSize)size;
-(NSError *)error;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(BOOL)parse;
-(void)abortParsing;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(SCD_Struct_RB26)backgroundColor;
-(id)initWithDelegate:(id)arg1 contentsOfURL:(id)arg2 options:(id)arg3 ;
-(RBDisplayList *)displayList;
@end

