/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHeuristic:(NSString *)arg1 ;
-(NSString *)heuristic;
-(void)setCriteria:(ATXActionCriteria *)arg1 ;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)action;
-(ATXActionCriteria *)criteria;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)_makeAction;
-(NSString *)actionTypeName;
@end

