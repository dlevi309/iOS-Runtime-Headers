/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface AFSiriRequest : NSObject <NSSecureCoding> {

	NSString* _originatingAceID;
	NSUUID* _identifier;
	NSString* __refId;

}

@property (setter=_setRefId:,nonatomic,copy) NSString * _refId;                                    //@synthesize _refId=__refId - In the implementation block
@property (setter=_setOriginatingAceID:,nonatomic,copy) NSString * _originatingAceID;              //@synthesize originatingAceID=_originatingAceID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)_refId;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setRefId:(id)arg1 ;
-(id)_initWithOriginatingAceID:(id)arg1 identifier:(id)arg2 ;
-(id)_descriptionWithProperties:(id)arg1 ;
-(id)requestName;
-(void)_setOriginatingAceID:(id)arg1 ;
-(id)description;
-(id)_identifier;
-(NSString *)_originatingAceID;
-(id)_initWithOriginatingAceID:(id)arg1 ;
-(id)_af_analyticsContextDescription;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_makeAppFrontmost;
@end

