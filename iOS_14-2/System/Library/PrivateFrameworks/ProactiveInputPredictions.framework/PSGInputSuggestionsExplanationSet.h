/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/ProactiveInputPredictions
*/

#import <ProactiveInputPredictions/ProactiveInputPredictions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _PASLock;

@interface PSGInputSuggestionsExplanationSet : NSObject <NSSecureCoding, NSCopying> {

	_PASLock* _lock;

}
+(BOOL)supportsSecureCoding;
+(id)stringFromExplanationCode:(unsigned)arg1 ;
+(id)_stringFromExplanation:(unsigned char)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSet:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)enumerateExplanationCodeWithBlock:(/*^block*/id)arg1 ;
-(void)_pushExplanationCode:(unsigned short)arg1 namespaceId:(unsigned short)arg2 ;
-(void)pushInternalExplanationCode:(unsigned)arg1 ;
-(void)pushPortraitExplanationCode:(unsigned char)arg1 ;
-(BOOL)hasPETLoggingData;
-(BOOL)hasContactsServingError;
-(BOOL)hasTriggeringXPCTimeout;
-(BOOL)isEqualToExplanationSet:(id)arg1 ;
@end

