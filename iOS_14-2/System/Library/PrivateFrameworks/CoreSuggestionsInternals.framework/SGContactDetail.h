/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SGRecordId, SGExtractionInfo, SGDuplicateKey;

@interface SGContactDetail : NSObject <NSCopying> {

	NSString* _normalizedValue;
	SGRecordId* _recordId;
	unsigned long long _type;
	NSString* _value;
	NSString* _label;
	SGExtractionInfo* _extractionInfo;
	NSString* _sourceKey;
	NSString* _context;
	SGDuplicateKey* _duplicateKey;

}

@property (nonatomic,readonly) SGRecordId * recordId;                          //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * value;                               //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * normalizedValue; 
@property (nonatomic,readonly) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) SGExtractionInfo * extractionInfo;              //@synthesize extractionInfo=_extractionInfo - In the implementation block
@property (nonatomic,readonly) NSString * sourceKey;                           //@synthesize sourceKey=_sourceKey - In the implementation block
@property (nonatomic,readonly) NSString * context;                             //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) SGDuplicateKey * duplicateKey;                  //@synthesize duplicateKey=_duplicateKey - In the implementation block
+(id)contactDetail:(id)arg1 label:(id)arg2 type:(unsigned long long)arg3 recordId:(id)arg4 duplicateKey:(id)arg5 sourceKey:(id)arg6 context:(id)arg7 extractionInfo:(id)arg8 ;
+(id)contactDetailFromEntity:(id)arg1 ;
-(NSString *)normalizedValue;
-(SGRecordId *)recordId;
-(SGDuplicateKey *)duplicateKey;
-(BOOL)isEqualToContactDetail:(id)arg1 ;
-(NSString *)context;
-(SGExtractionInfo *)extractionInfo;
-(unsigned long long)type;
-(id)initWithValue:(id)arg1 label:(id)arg2 type:(unsigned long long)arg3 recordId:(id)arg4 duplicateKey:(id)arg5 sourceKey:(id)arg6 context:(id)arg7 extractionInfo:(id)arg8 ;
-(unsigned long long)hash;
-(NSString *)sourceKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

