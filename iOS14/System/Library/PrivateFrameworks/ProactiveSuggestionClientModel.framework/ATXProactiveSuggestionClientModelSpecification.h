/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <ProactiveSuggestionClientModel/ProactiveSuggestionClientModel-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXProactiveSuggestionClientModelSpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying> {

	NSString* _clientModelId;
	NSString* _clientModelVersion;
	unsigned long long _engagementResetPolicy;

}

@property (nonatomic,readonly) NSString * clientModelId;                              //@synthesize clientModelId=_clientModelId - In the implementation block
@property (nonatomic,readonly) NSString * clientModelVersion;                         //@synthesize clientModelVersion=_clientModelVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long engagementResetPolicy;              //@synthesize engagementResetPolicy=_engagementResetPolicy - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(NSString *)clientModelId;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)proto;
-(id)encodeAsProto;
-(NSString *)clientModelVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)engagementResetPolicy;
-(BOOL)fuzzyIsEqualToClientModelSpecification:(id)arg1 ;
-(id)initWithClientModelId:(id)arg1 clientModelVersion:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)initWithClientModelId:(id)arg1 clientModelVersion:(id)arg2 engagementResetPolicy:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)jsonRawData;
@end

