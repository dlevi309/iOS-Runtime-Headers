/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils
*/

#import <DaemonUtils/Request.h>

@class NSData, NSDictionary;

@interface EvaluationRequest : Request {

	long long _policy;
	NSData* _acl;
	id _aclOperation;
	NSDictionary* _options;
	long long _purpose;

}

@property (nonatomic,readonly) long long policy;                    //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) NSData * acl;                        //@synthesize acl=_acl - In the implementation block
@property (nonatomic,readonly) id aclOperation;                     //@synthesize aclOperation=_aclOperation - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long purpose;                   //@synthesize purpose=_purpose - In the implementation block
-(NSDictionary *)options;
-(long long)policy;
-(long long)purpose;
-(BOOL)interactive;
-(NSData *)acl;
-(void)updateOptions:(id)arg1 ;
-(id)initWithPolicy:(long long)arg1 options:(id)arg2 ;
-(id)initWithAcl:(id)arg1 operation:(id)arg2 options:(id)arg3 ;
-(id)aclOperation;
@end

