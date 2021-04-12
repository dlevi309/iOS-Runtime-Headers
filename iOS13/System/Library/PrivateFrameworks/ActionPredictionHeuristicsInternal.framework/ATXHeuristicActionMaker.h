/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ATXActionCriteria;

@interface ATXHeuristicActionMaker : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _subtitle;
	ATXActionCriteria* _criteria;
	NSString* _heuristic;

}

@property (nonatomic,readonly) NSString * actionTypeName; 
@property (nonatomic,retain) ATXActionCriteria * criteria;              //@synthesize criteria=_criteria - In the implementation block
@property (nonatomic,retain) NSString * heuristic;                      //@synthesize heuristic=_heuristic - In the implementation block
@property (nonatomic,retain) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)action;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(ATXActionCriteria *)criteria;
-(void)setCriteria:(ATXActionCriteria *)arg1 ;
-(void)setHeuristic:(NSString *)arg1 ;
-(NSString *)heuristic;
-(id)_makeAction;
-(NSString *)actionTypeName;
@end

