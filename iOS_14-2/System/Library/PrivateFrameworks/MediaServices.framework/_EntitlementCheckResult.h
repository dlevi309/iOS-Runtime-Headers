/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@class NSError, NSString;

@interface _EntitlementCheckResult : NSObject {

	BOOL _entitled;
	NSError* _error;
	NSString* _group;
	NSString* _entitlement;

}

@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * group;                               //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSString * entitlement;                         //@synthesize entitlement=_entitlement - In the implementation block
@property (assign,getter=isEntitled,nonatomic) BOOL entitled;              //@synthesize entitled=_entitled - In the implementation block
-(void)setGroup:(NSString *)arg1 ;
-(NSString *)group;
-(NSString *)entitlement;
-(BOOL)isEntitled;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setEntitled:(BOOL)arg1 ;
-(id)initWithEntitlement:(id)arg1 group:(id)arg2 ;
-(void)setEntitlement:(NSString *)arg1 ;
@end

