/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <libobjc.A.dylib/ASKNQMLParser.h>

@interface _TtC11AppStoreKitP33_9642CCE02323FAF22DDBBFD3680E3E9F19NqmlStringGenerator : NSObject <ASKNQMLParser> {

	 parser;
	 configuration;
	 orderedListTracker;
	 accumulator;
	 attributeStack;
	 didParseEverything;
	 foregroundColor;

}
-(id)init;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parserDidStartListElement:(id)arg1 ;
-(void)parser:(id)arg1 didStartListOfStyle:(unsigned long long)arg2 ;
-(void)parser:(id)arg1 didStartElement:(unsigned long long)arg2 attributes:(id)arg3 ;
-(void)parserDidFindNewline:(id)arg1 ;
-(void)parserDidEndListElement:(id)arg1 ;
-(void)parser:(id)arg1 didEndListOfStyle:(unsigned long long)arg2 ;
-(void)parser:(id)arg1 didEndElement:(unsigned long long)arg2 ;
-(void)parser:(id)arg1 didFindCharacters:(id)arg2 ;
@end

