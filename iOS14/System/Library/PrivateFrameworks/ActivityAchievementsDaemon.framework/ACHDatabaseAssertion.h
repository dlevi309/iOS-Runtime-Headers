/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class HDAssertion;

@interface ACHDatabaseAssertion : NSObject {

	HDAssertion* _assertion;

}

@property (nonatomic,retain) HDAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
+(id)assertionWithDatabase:(id)arg1 identifier:(id)arg2 timeout:(double)arg3 error:(id*)arg4 ;
+(id)assertionWithDatabase:(id)arg1 identifier:(id)arg2 error:(id*)arg3 ;
-(void)setAssertion:(HDAssertion *)arg1 ;
-(HDAssertion *)assertion;
-(void)invalidate;
-(void)dealloc;
-(id)initWithHDAssertion:(id)arg1 ;
@end

