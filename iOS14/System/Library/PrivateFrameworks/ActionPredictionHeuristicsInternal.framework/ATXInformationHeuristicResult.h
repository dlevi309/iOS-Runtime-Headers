/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSSet;

@interface ATXInformationHeuristicResult : NSObject <NSSecureCoding> {

	BOOL _hasFailed;
	NSString* _heuristicName;
	NSArray* _suggestions;
	NSSet* _refreshTriggers;

}

@property (nonatomic,readonly) NSString * heuristicName;              //@synthesize heuristicName=_heuristicName - In the implementation block
@property (nonatomic,readonly) NSArray * suggestions;                 //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,readonly) NSSet * refreshTriggers;               //@synthesize refreshTriggers=_refreshTriggers - In the implementation block
@property (nonatomic,readonly) BOOL hasFailed;                        //@synthesize hasFailed=_hasFailed - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)suggestions;
-(id)initWithHeuristicName:(id)arg1 suggestions:(id)arg2 refreshTriggers:(id)arg3 hasFailed:(BOOL)arg4 ;
-(BOOL)hasFailed;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_safeDecodeObjectOfClasses:(id)arg1 forKey:(id)arg2 withCoder:(id)arg3 nonNull:(BOOL)arg4 ;
-(NSString *)heuristicName;
-(id)initWithCoder:(id)arg1 ;
-(id)_safeDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2 withCoder:(id)arg3 nonNull:(BOOL)arg4 ;
-(NSSet *)refreshTriggers;
@end

