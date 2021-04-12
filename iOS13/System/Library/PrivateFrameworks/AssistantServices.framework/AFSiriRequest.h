/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_identifier;
-(id)_af_analyticsContextDescription;
-(id)_initWithOriginatingAceID:(id)arg1 ;
-(NSString *)_originatingAceID;
-(BOOL)_makeAppFrontmost;
-(id)_initWithOriginatingAceID:(id)arg1 identifier:(id)arg2 ;
-(id)_descriptionWithProperties:(id)arg1 ;
-(id)requestName;
-(void)_setOriginatingAceID:(id)arg1 ;
-(NSString *)_refId;
-(void)_setRefId:(id)arg1 ;
@end

