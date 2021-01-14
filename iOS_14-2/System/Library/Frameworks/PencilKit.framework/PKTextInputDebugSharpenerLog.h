/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class NSArray, NSDictionary;

@interface PKTextInputDebugSharpenerLog : NSObject {

	NSArray* _logEntries;
	NSDictionary* _metadataDictionary;

}

@property (nonatomic,readonly) NSArray * logEntries;                           //@synthesize logEntries=_logEntries - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadataDictionary;              //@synthesize metadataDictionary=_metadataDictionary - In the implementation block
+(BOOL)canLoadFromFileAtURL:(id)arg1 ;
+(id)_environmentMetadataDictionary;
+(id)_recommendedFileNameForLogWithDate:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(NSDictionary *)metadataDictionary;
-(id)initWithLogEntries:(id)arg1 ;
-(NSArray *)logEntries;
-(id)writeLogToTemporaryDirectoryWithContentLevel:(long long)arg1 error:(id*)arg2 ;
-(BOOL)_loadFromFileURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeToURL:(id)arg1 withContentLevel:(long long)arg2 error:(id*)arg3 ;
-(id)_dictionaryRepresentationWithContentLevel:(long long)arg1 ;
@end

