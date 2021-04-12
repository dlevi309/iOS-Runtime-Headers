/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXTextContentProvider.h>

@class SXDocument, NSString;

@interface SXDocumentTextContentProvider : NSObject <SXTextContentProvider> {

	SXDocument* _document;

}

@property (nonatomic,readonly) SXDocument * document;               //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedQueue;
-(id)initWithDocument:(id)arg1 ;
-(SXDocument *)document;
-(id)textContentForComponents:(id)arg1 withType:(unsigned long long)arg2 ;
-(id)textContentForComponent:(id)arg1 withType:(unsigned long long)arg2 ;
-(BOOL)classification:(id)arg1 isValidForType:(unsigned long long)arg2 ;
-(BOOL)contentRelevance:(unsigned long long)arg1 isValidForType:(unsigned long long)arg2 ;
-(void)textContentForType:(unsigned long long)arg1 onCompletion:(/*^block*/id)arg2 ;
@end

