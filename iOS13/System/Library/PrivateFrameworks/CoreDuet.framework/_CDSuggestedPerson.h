/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class _CDContact, NSString, NSArray;

@interface _CDSuggestedPerson : NSObject {

	_CDContact* _contact;
	NSString* _interactionBundleID;
	double _rank;
	double _score;
	NSArray* _interactions;

}

@property (retain) NSString * interactionBundleID;              //@synthesize interactionBundleID=_interactionBundleID - In the implementation block
@property (assign) double rank;                                 //@synthesize rank=_rank - In the implementation block
@property (assign) double score;                                //@synthesize score=_score - In the implementation block
@property (retain) NSArray * interactions;                      //@synthesize interactions=_interactions - In the implementation block
@property (retain) _CDContact * contact;                        //@synthesize contact=_contact - In the implementation block
-(id)description;
-(double)score;
-(NSArray *)interactions;
-(_CDContact *)contact;
-(void)setContact:(_CDContact *)arg1 ;
-(void)setScore:(double)arg1 ;
-(void)setRank:(double)arg1 ;
-(void)setInteractions:(NSArray *)arg1 ;
-(void)setInteractionBundleID:(NSString *)arg1 ;
-(double)rank;
-(NSString *)interactionBundleID;
@end

