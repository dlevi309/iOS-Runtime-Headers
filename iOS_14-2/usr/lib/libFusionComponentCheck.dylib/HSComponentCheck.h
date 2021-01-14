/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libFusionComponentCheck.dylib
*/


@interface HSComponentCheck : NSObject {

	unsigned long long currentContext;

}
+(unsigned long long)getContext;
+(void)setContext:(unsigned long long)arg1 ;
+(id)sharedSingleton;
-(id)init;
-(id)createChallenge;
-(id)generateSignedKETS:(id)arg1 status:(id)arg2 errorStr:(id)arg3 ;
-(id)calculateSHA512:(id)arg1 ;
-(int)processComponentCheckCommand:(id)arg1 response:(id*)arg2 ;
@end

