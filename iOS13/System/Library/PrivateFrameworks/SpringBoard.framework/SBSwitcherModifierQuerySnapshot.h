/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSArray, NSDictionary;

@interface SBSwitcherModifierQuerySnapshot : NSObject {

	NSArray* _implementingQueryMethods;
	NSArray* _nonImplementingQueryMethods;
	NSDictionary* _queryMethodsToDescriptions;

}

@property (nonatomic,retain) NSArray * implementingQueryMethods;                     //@synthesize implementingQueryMethods=_implementingQueryMethods - In the implementation block
@property (nonatomic,retain) NSArray * nonImplementingQueryMethods;                  //@synthesize nonImplementingQueryMethods=_nonImplementingQueryMethods - In the implementation block
@property (nonatomic,retain) NSDictionary * queryMethodsToDescriptions;              //@synthesize queryMethodsToDescriptions=_queryMethodsToDescriptions - In the implementation block
-(NSArray *)implementingQueryMethods;
-(NSArray *)nonImplementingQueryMethods;
-(NSDictionary *)queryMethodsToDescriptions;
-(void)setQueryMethodsToDescriptions:(NSDictionary *)arg1 ;
-(void)setImplementingQueryMethods:(NSArray *)arg1 ;
-(void)setNonImplementingQueryMethods:(NSArray *)arg1 ;
@end

