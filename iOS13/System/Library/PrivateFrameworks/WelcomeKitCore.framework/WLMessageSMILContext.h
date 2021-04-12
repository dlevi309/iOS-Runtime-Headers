/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSString, NSArray;

@interface WLMessageSMILContext : NSObject <NSXMLParserDelegate> {

	BOOL _inBody;
	BOOL _inPar;
	NSString* _characters;
	NSArray* _parts;

}

@property (nonatomic,readonly) NSString * characters;               //@synthesize characters=_characters - In the implementation block
@property (nonatomic,readonly) NSArray * parts;                     //@synthesize parts=_parts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)characters;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(NSArray *)parts;
@end

