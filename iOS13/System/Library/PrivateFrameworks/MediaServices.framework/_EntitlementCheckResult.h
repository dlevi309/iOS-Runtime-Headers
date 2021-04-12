/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)group;
-(NSString *)entitlement;
-(BOOL)isEntitled;
-(void)setEntitlement:(NSString *)arg1 ;
-(id)initWithEntitlement:(id)arg1 group:(id)arg2 ;
-(void)setEntitled:(BOOL)arg1 ;
@end

