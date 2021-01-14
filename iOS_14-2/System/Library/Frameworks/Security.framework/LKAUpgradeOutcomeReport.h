/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@class NSDictionary;

@interface LKAUpgradeOutcomeReport : NSObject {

	int _outcome;
	NSDictionary* _attributes;

}

@property (assign) int outcome;                            //@synthesize outcome=_outcome - In the implementation block
@property (retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(void)setAttributes:(NSDictionary *)arg1 ;
-(int)outcome;
-(void)setOutcome:(int)arg1 ;
-(id)initWithOutcome:(int)arg1 attributes:(id)arg2 ;
-(NSDictionary *)attributes;
@end

