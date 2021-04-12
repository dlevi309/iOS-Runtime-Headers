/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSArray, NSDictionary, NSData;

@interface GEOPNRStringsFileReader : NSObject {

	NSArray* _supportedLanguages;
	NSDictionary* _offsetForLang;
	NSData* _stringsFile;

}

@property (nonatomic,retain,readonly) NSArray * supportedLanguages;              //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * offsetForLang;              //@synthesize offsetForLang=_offsetForLang - In the implementation block
@property (nonatomic,retain,readonly) NSData * stringsFile;                      //@synthesize stringsFile=_stringsFile - In the implementation block
-(id)initWithFile:(id)arg1 ;
-(id)stringForLang:(id)arg1 withId:(unsigned)arg2 ;
-(NSArray *)supportedLanguages;
-(NSDictionary *)offsetForLang;
-(NSData *)stringsFile;
@end

