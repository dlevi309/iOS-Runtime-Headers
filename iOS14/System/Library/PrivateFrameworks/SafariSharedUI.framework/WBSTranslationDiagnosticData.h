/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSArray;

@interface WBSTranslationDiagnosticData : NSObject <NSCopying> {

	NSMutableArray* _extractedParagraphs;
	NSMutableArray* _translatedParagraphs;
	NSString* _URLString;
	NSString* _extractedParagraphsAsJSON;
	NSString* _translatedParagraphsAsJSON;

}

@property (nonatomic,copy) NSString * extractedParagraphsAsJSON;                 //@synthesize extractedParagraphsAsJSON=_extractedParagraphsAsJSON - In the implementation block
@property (nonatomic,copy) NSString * translatedParagraphsAsJSON;                //@synthesize translatedParagraphsAsJSON=_translatedParagraphsAsJSON - In the implementation block
@property (nonatomic,copy) NSString * URLString;                                 //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * extractedParagraphs; 
@property (nonatomic,copy,readonly) NSArray * translatedParagraphs; 
-(NSString *)URLString;
-(id)init;
-(void)setURLString:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)saveDiagnosticDataAsTemporaryFiles;
-(NSArray *)extractedParagraphs;
-(void)setExtractedParagraphsAsJSON:(NSString *)arg1 ;
-(NSArray *)translatedParagraphs;
-(void)setTranslatedParagraphsAsJSON:(NSString *)arg1 ;
-(void)addExtractedParagraphs:(id)arg1 ;
-(void)addTranslatedParagraph:(id)arg1 ;
-(id)_destinationDirectory;
-(id)_createFileForContents:(id)arg1 fileName:(id)arg2 inDirectory:(id)arg3 ;
-(NSString *)extractedParagraphsAsJSON;
-(NSString *)translatedParagraphsAsJSON;
@end

