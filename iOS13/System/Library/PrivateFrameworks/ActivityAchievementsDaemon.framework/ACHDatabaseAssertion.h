/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/


@class HDAssertion;

@interface ACHDatabaseAssertion : NSObject {

	HDAssertion* _assertion;

}

@property (nonatomic,retain) HDAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
+(id)assertionWithDatabase:(id)arg1 identifier:(id)arg2 timeout:(double)arg3 error:(id*)arg4 ;
+(id)assertionWithDatabase:(id)arg1 identifier:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(HDAssertion *)assertion;
-(void)setAssertion:(HDAssertion *)arg1 ;
-(id)initWithHDAssertion:(id)arg1 ;
@end

