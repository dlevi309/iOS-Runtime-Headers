/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSString;

@interface AFSharedConfidenceScore : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	NSString* _sharedUserId;
	unsigned long long _confidenceScore;

}

@property (nonatomic,copy,readonly) NSString * sharedUserId;                    //@synthesize sharedUserId=_sharedUserId - In the implementation block
@property (nonatomic,readonly) unsigned long long confidenceScore;              //@synthesize confidenceScore=_confidenceScore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)confidenceScore;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)sharedUserId;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithSharedUserId:(id)arg1 confidenceScore:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

