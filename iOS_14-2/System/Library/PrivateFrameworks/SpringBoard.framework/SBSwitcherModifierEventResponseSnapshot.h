/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSArray;

@interface SBSwitcherModifierEventResponseSnapshot : NSObject {

	NSArray* _responseNames;
	NSArray* _responseDescriptions;

}

@property (nonatomic,retain) NSArray * responseNames;                     //@synthesize responseNames=_responseNames - In the implementation block
@property (nonatomic,retain) NSArray * responseDescriptions;              //@synthesize responseDescriptions=_responseDescriptions - In the implementation block
-(NSArray *)responseNames;
-(NSArray *)responseDescriptions;
-(void)setResponseNames:(NSArray *)arg1 ;
-(void)setResponseDescriptions:(NSArray *)arg1 ;
@end

