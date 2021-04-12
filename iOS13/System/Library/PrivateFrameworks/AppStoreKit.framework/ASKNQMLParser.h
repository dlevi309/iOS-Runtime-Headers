/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@protocol ASKNQMLParser <NSObject>
@required
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
-(void)parserDidStartDocument:(id)arg1;
-(void)parserDidEndDocument:(id)arg1;
-(void)parserDidStartListElement:(id)arg1;
-(void)parser:(id)arg1 didStartListOfStyle:(unsigned long long)arg2;
-(void)parser:(id)arg1 didStartListOfStyle:(unsigned long long)arg2;
-(void)parser:(id)arg1 didStartElement:(unsigned long long)arg2 attributes:(id)arg3;
-(void)parserDidFindNewline:(id)arg1;
-(void)parserDidEndListElement:(id)arg1;
-(void)parser:(id)arg1 didEndListOfStyle:(unsigned long long)arg2;
-(void)parser:(id)arg1 didEndListOfStyle:(unsigned long long)arg2;
-(void)parser:(id)arg1 didEndElement:(unsigned long long)arg2;
-(void)parser:(id)arg1 didFindCharacters:(id)arg2;

@end

