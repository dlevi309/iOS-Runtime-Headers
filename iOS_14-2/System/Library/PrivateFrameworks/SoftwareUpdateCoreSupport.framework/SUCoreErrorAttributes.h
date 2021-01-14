/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/


@class NSString, NSDictionary;

@interface SUCoreErrorAttributes : NSObject {

	NSString* _domain;
	long long _code;
	NSString* _codeName;
	long long _indications;
	NSString* _keyMatchTrue;
	NSDictionary* _keyMatchTrueMap;

}

@property (nonatomic,retain,readonly) NSString * domain;                  //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) long long code;                            //@synthesize code=_code - In the implementation block
@property (nonatomic,retain,readonly) NSString * codeName;                //@synthesize codeName=_codeName - In the implementation block
@property (assign,nonatomic) long long indications;                       //@synthesize indications=_indications - In the implementation block
@property (nonatomic,retain) NSString * keyMatchTrue;                     //@synthesize keyMatchTrue=_keyMatchTrue - In the implementation block
@property (nonatomic,retain) NSDictionary * keyMatchTrueMap;              //@synthesize keyMatchTrueMap=_keyMatchTrueMap - In the implementation block
+(id)nameForIndication:(long long)arg1 ;
+(id)descriptionForIndication:(long long)arg1 ;
-(NSString *)domain;
-(id)description;
-(long long)code;
-(NSString *)codeName;
-(long long)indications;
-(NSString *)keyMatchTrue;
-(NSDictionary *)keyMatchTrueMap;
-(id)initForDomain:(id)arg1 withCode:(long long)arg2 ofCodeName:(id)arg3 indicating:(long long)arg4 ifKeyTrue:(id)arg5 keyMatchTrueMap:(id)arg6 ;
-(void)setIndications:(long long)arg1 ;
-(void)setKeyMatchTrue:(NSString *)arg1 ;
-(void)setKeyMatchTrueMap:(NSDictionary *)arg1 ;
@end

