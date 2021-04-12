/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


#import <NaturalLanguage/NaturalLanguage-Structs.h>
@class NSString, NSData;

@interface NLGazetteer : NSObject {

	void* _gazetteer;
	NSString* _language;

}

@property (copy,readonly) NSString * language;              //@synthesize language=_language - In the implementation block
@property (copy,readonly) NSData * data; 
+(id)gazetteerWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(id)gazetteerWithData:(id)arg1 error:(id*)arg2 ;
+(id)gazetteerWithMLModel:(id)arg1 error:(id*)arg2 ;
+(BOOL)writeGazetteerForDictionary:(id)arg1 language:(id)arg2 toURL:(id)arg3 error:(id*)arg4 ;
+(BOOL)writeGazetteerMLModelForDictionary:(id)arg1 language:(id)arg2 toURL:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(void)dealloc;
-(NSData *)data;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)modelDescription;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)labels;
-(NSString *)language;
-(id)initWithMLModel:(id)arg1 error:(id*)arg2 ;
-(id)initWithNLModel:(id)arg1 error:(id*)arg2 ;
-(id)initWithDictionary:(id)arg1 language:(id)arg2 error:(id*)arg3 ;
-(BOOL)writeMLModelToURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)labelForString:(id)arg1 ;
-(void)_addImplementationToArray:(CFArrayRef)arg1 ;
@end

