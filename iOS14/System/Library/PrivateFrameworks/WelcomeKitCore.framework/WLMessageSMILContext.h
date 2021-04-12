/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)parts;
-(id)init;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(NSString *)characters;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
@end

