/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSString, AFPeerInfo, NSDictionary;

@interface AFCommandExecutionInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	NSString* _executionID;
	NSString* _requestID;
	AFPeerInfo* _originPeerInfo;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSString * executionID;                   //@synthesize executionID=_executionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestID;                     //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy,readonly) AFPeerInfo * originPeerInfo;              //@synthesize originPeerInfo=_originPeerInfo - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                  //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)requestID;
-(NSString *)description;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSString *)executionID;
-(AFPeerInfo *)originPeerInfo;
-(id)initWithExecutionID:(id)arg1 requestID:(id)arg2 originPeerInfo:(id)arg3 userInfo:(id)arg4 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

