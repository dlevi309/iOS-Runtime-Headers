/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSString, SGExtractionInfo;

@interface SGSelfIdentificationDetection : NSObject {

	NSString* _name;
	NSString* _context;
	SGExtractionInfo* _extractionInfo;
	NSRange _contextRange;

}

@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * context;                               //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) NSRange contextRange;                           //@synthesize contextRange=_contextRange - In the implementation block
@property (nonatomic,retain) SGExtractionInfo * extractionInfo;              //@synthesize extractionInfo=_extractionInfo - In the implementation block
-(void)setExtractionInfo:(SGExtractionInfo *)arg1 ;
-(NSString *)context;
-(NSString *)name;
-(SGExtractionInfo *)extractionInfo;
-(void)setName:(NSString *)arg1 ;
-(void)setContext:(NSString *)arg1 ;
-(NSRange)contextRange;
-(void)setContextRange:(NSRange)arg1 ;
@end

