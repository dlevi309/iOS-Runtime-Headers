/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@class NSDictionary;

@interface LKAUpgradeOutcomeReport : NSObject {

	int _outcome;
	NSDictionary* _attributes;

}

@property (assign) int outcome;                            //@synthesize outcome=_outcome - In the implementation block
@property (retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(id)initWithOutcome:(int)arg1 attributes:(id)arg2 ;
-(int)outcome;
-(void)setOutcome:(int)arg1 ;
@end

