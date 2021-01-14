/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

