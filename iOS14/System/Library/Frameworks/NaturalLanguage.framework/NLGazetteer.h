/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)labels;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(NSData *)data;
-(id)modelDescription;
-(id)initWithMLModel:(id)arg1 error:(id*)arg2 ;
-(NSString *)language;
-(void)dealloc;
-(id)labelForString:(id)arg1 ;
-(id)initWithNLModel:(id)arg1 error:(id*)arg2 ;
-(id)initWithDictionary:(id)arg1 language:(id)arg2 error:(id*)arg3 ;
-(BOOL)writeMLModelToURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)_addImplementationToArray:(CFArrayRef)arg1 ;
@end

