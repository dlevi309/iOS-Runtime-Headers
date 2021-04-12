/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ATXInformationHeuristicRefreshTriggerDelegate;
@class NSMutableSet, NSSet;

@interface ATXInformationHeuristicRefreshTrigger : NSObject <NSSecureCoding> {

	NSMutableSet* _registeredHeuristics;
	id<ATXInformationHeuristicRefreshTriggerDelegate> _delegate;

}

@property (nonatomic,readonly) NSSet * registeredHeuristics; 
@property (assign,nonatomic,__weak) id<ATXInformationHeuristicRefreshTriggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)startTriggeringRefreshForHeuristicIfNotAlready:(id)arg1 ;
-(id)init;
-(id<ATXInformationHeuristicRefreshTriggerDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_start;
-(id)_safeDecodeObjectOfClasses:(id)arg1 forKey:(id)arg2 withCoder:(id)arg3 nonNull:(BOOL)arg4 ;
-(void)setDelegate:(id<ATXInformationHeuristicRefreshTriggerDelegate>)arg1 ;
-(NSSet *)registeredHeuristics;
-(void)_stop;
-(id)initWithCoder:(id)arg1 ;
-(id)_safeDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2 withCoder:(id)arg3 nonNull:(BOOL)arg4 ;
-(void)stopTriggeringRefreshForHeuristicIfAlready:(id)arg1 ;
-(void)stopTriggeringRefreshForAllHeuristics;
-(void)dealloc;
@end

