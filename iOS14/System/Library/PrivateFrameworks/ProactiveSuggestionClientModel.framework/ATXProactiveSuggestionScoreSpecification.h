/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <ProactiveSuggestionClientModel/ProactiveSuggestionClientModel-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATXProactiveSuggestionScoreSpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying> {

	double _rawScore;
	long long _suggestedConfidenceCategory;

}

@property (assign,nonatomic) double rawScore;                                    //@synthesize rawScore=_rawScore - In the implementation block
@property (assign,nonatomic) long long suggestedConfidenceCategory;              //@synthesize suggestedConfidenceCategory=_suggestedConfidenceCategory - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringForSuggestedConfidenceCategory:(long long)arg1 ;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(void)setSuggestedConfidenceCategory:(long long)arg1 ;
-(id)proto;
-(id)init;
-(id)encodeAsProto;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRawScore:(double)arg1 suggestedConfidenceCategory:(long long)arg2 ;
-(BOOL)fuzzyIsEqualToScoreSpecification:(id)arg1 ;
-(id)description;
-(double)rawScore;
-(unsigned long long)hash;
-(void)setRawScore:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(long long)suggestedConfidenceCategory;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)jsonRawData;
@end

