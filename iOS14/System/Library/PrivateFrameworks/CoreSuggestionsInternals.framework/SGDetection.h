/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSString, SGExtractionInfo;

@interface SGDetection : NSObject {

	BOOL _hasPhoneLabel;
	BOOL _isUnlikelyPhone;
	unsigned _type;
	NSString* _extraction;
	NSString* _context;
	NSString* _label;
	SGExtractionInfo* _extractionInfo;
	NSRange _contextRangeOfInterest;
	NSRange _match;

}

@property (nonatomic,readonly) unsigned type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * extraction;                          //@synthesize extraction=_extraction - In the implementation block
@property (nonatomic,readonly) NSString * context;                             //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSRange contextRangeOfInterest;                 //@synthesize contextRangeOfInterest=_contextRangeOfInterest - In the implementation block
@property (nonatomic,readonly) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneLabel;                             //@synthesize hasPhoneLabel=_hasPhoneLabel - In the implementation block
@property (nonatomic,readonly) NSRange match;                                  //@synthesize match=_match - In the implementation block
@property (nonatomic,readonly) SGExtractionInfo * extractionInfo;              //@synthesize extractionInfo=_extractionInfo - In the implementation block
@property (nonatomic,readonly) BOOL isUnlikelyPhone;                           //@synthesize isUnlikelyPhone=_isUnlikelyPhone - In the implementation block
+(id)detectionWithType:(unsigned)arg1 text:(id)arg2 matchRange:(NSRange)arg3 matchString:(id)arg4 label:(id)arg5 hasPhoneLabel:(BOOL)arg6 extractionInfo:(id)arg7 isUnlikelyPhone:(BOOL)arg8 ;
-(NSRange)match;
-(NSString *)context;
-(id)description;
-(SGExtractionInfo *)extractionInfo;
-(unsigned)type;
-(NSString *)label;
-(BOOL)isUnlikelyPhone;
-(id)initWithType:(unsigned)arg1 extraction:(id)arg2 context:(id)arg3 contextRangeOfInterest:(NSRange)arg4 label:(id)arg5 hasPhoneLabel:(BOOL)arg6 match:(NSRange)arg7 extractionInfo:(id)arg8 isUnlikelyPhone:(BOOL)arg9 ;
-(NSString *)extraction;
-(NSRange)contextRangeOfInterest;
-(BOOL)hasPhoneLabel;
@end

