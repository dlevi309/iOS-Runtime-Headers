/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRank:(double)arg1 ;
-(_CDContact *)contact;
-(void)setContact:(_CDContact *)arg1 ;
-(double)score;
-(void)setScore:(double)arg1 ;
-(id)description;
-(double)rank;
-(void)setInteractions:(NSArray *)arg1 ;
-(NSArray *)interactions;
-(void)setInteractionBundleID:(NSString *)arg1 ;
-(NSString *)interactionBundleID;
@end

