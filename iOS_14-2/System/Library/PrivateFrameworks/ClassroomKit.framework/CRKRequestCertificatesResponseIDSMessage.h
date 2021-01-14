/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKIDSMessage.h>

@class NSUUID, NSArray, NSError, NSDictionary;

@interface CRKRequestCertificatesResponseIDSMessage : NSObject <CRKIDSMessage> {

	NSUUID* _requestIdentifier;
	NSArray* _certificateDataCollection;
	NSError* _error;

}

@property (nonatomic,readonly) NSUUID * requestIdentifier;                       //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * certificateDataCollection;              //@synthesize certificateDataCollection=_certificateDataCollection - In the implementation block
@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) long long messageType; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)instanceWithDictionary:(id)arg1 ;
-(long long)messageType;
-(NSUUID *)requestIdentifier;
-(NSError *)error;
-(NSDictionary *)dictionaryValue;
-(NSArray *)certificateDataCollection;
-(id)initWithRequestIdentifier:(id)arg1 certificateDataCollection:(id)arg2 error:(id)arg3 ;
@end

