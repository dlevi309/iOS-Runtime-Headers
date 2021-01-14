/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <ProactiveSuggestionClientModel/ProactiveSuggestionClientModel-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATXProactiveSuggestionLayoutConfig : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying> {

	long long _applicableLayoutType;

}

@property (nonatomic,readonly) long long applicableLayoutType;              //@synthesize applicableLayoutType=_applicableLayoutType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)layoutConfigurationsForLayoutOptions:(unsigned long long)arg1 ;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(id)proto;
-(id)init;
-(id)encodeAsProto;
-(long long)applicableLayoutType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithApplicableSuggestionLayout:(long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

