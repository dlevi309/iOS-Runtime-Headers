/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString;

@interface FCSectionSupergroupKnobs : NSObject {

	BOOL _isEligible;
	NSString* _nameOverride;
	double _rankMultiplier;

}

@property (assign,nonatomic) BOOL isEligible;                        //@synthesize isEligible=_isEligible - In the implementation block
@property (nonatomic,readonly) NSString * nameOverride;              //@synthesize nameOverride=_nameOverride - In the implementation block
@property (nonatomic,readonly) double rankMultiplier;                //@synthesize rankMultiplier=_rankMultiplier - In the implementation block
-(id)initWithJSONString:(id)arg1 ;
-(double)rankMultiplier;
-(NSString *)nameOverride;
-(void)setIsEligible:(BOOL)arg1 ;
-(id)initWithJSONData:(id)arg1 ;
-(BOOL)isEligible;
@end

