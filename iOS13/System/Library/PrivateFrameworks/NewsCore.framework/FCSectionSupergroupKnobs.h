/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEligible;
-(void)setIsEligible:(BOOL)arg1 ;
-(id)initWithJSONString:(id)arg1 ;
-(id)initWithJSONData:(id)arg1 ;
-(NSString *)nameOverride;
-(double)rankMultiplier;
@end

