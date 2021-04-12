/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
*/

#import <ProactiveSuggestionClientModel/ProactiveSuggestionClientModel-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol ATXSuggestionExecutableProtocol;
@class NSData, NSString;

@interface ATXProactiveSuggestionExecutableSpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying> {

	id<ATXSuggestionExecutableProtocol> _executableObject;
	NSData* _executable;
	unsigned long long _executableObjectHash;
	NSString* _executableClassString;
	NSString* _executableDescription;
	NSString* _executableIdentifier;
	long long _executableType;

}

@property (nonatomic,readonly) NSData * executable;                                               //@synthesize executable=_executable - In the implementation block
@property (nonatomic,readonly) id<ATXSuggestionExecutableProtocol> executableObject; 
@property (nonatomic,readonly) unsigned long long executableObjectHash;                           //@synthesize executableObjectHash=_executableObjectHash - In the implementation block
@property (nonatomic,readonly) NSString * executableClassString;                                  //@synthesize executableClassString=_executableClassString - In the implementation block
@property (nonatomic,readonly) NSString * executableDescription;                                  //@synthesize executableDescription=_executableDescription - In the implementation block
@property (nonatomic,readonly) NSString * executableIdentifier;                                   //@synthesize executableIdentifier=_executableIdentifier - In the implementation block
@property (nonatomic,readonly) long long executableType;                                          //@synthesize executableType=_executableType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringForExecutableType:(long long)arg1 ;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(id)initWithExecutable:(id)arg1 expectedExecutableClassString:(id)arg2 executableDescription:(id)arg3 executableIdentifier:(id)arg4 suggestionExecutableType:(long long)arg5 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)proto;
-(id)encodeAsProto;
-(void)encodeWithCoder:(id)arg1 ;
-(id)executableObjectFromData:(id)arg1 executableClassString:(id)arg2 ;
-(NSData *)executable;
-(long long)executableType;
-(id)description;
-(BOOL)fuzzyIsEqualToExecutableSpecification:(id)arg1 ;
-(id)initWithExecutableObject:(id)arg1 executableDescription:(id)arg2 executableIdentifier:(id)arg3 suggestionExecutableType:(long long)arg4 ;
-(id)initWithExecutable:(id)arg1 executableObjectHash:(unsigned long long)arg2 expectedExecutableClassString:(id)arg3 executableDescription:(id)arg4 executableIdentifier:(id)arg5 suggestionExecutableType:(long long)arg6 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)executableIdentifier;
-(id<ATXSuggestionExecutableProtocol>)executableObject;
-(id)initWithExecutable:(id)arg1 expectedExecutableClassString:(id)arg2 executableDescription:(id)arg3 executableIdentifier:(id)arg4 ;
-(id)executableDataFromExecutableObject:(id)arg1 executableClassStringFromObject:(id)arg2 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)allowedExecutableClasses;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSUInteger:(unsigned long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(unsigned long long)executableObjectHash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)executableDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)jsonRawData;
-(NSString *)executableClassString;
@end

