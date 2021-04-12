/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUQuickControlItemPredicate.h>

@class NSArray, NSString;

@interface HUQuickControlCompoundItemPredicate : NSObject <HUQuickControlItemPredicate> {

	NSArray* _requiredSubpredicates;
	NSArray* _optionalSubpredicates;
	unsigned long long _minimumNumberOfMatchedPredicates;

}

@property (nonatomic,copy,readonly) NSArray * requiredSubpredicates;                             //@synthesize requiredSubpredicates=_requiredSubpredicates - In the implementation block
@property (nonatomic,copy,readonly) NSArray * optionalSubpredicates;                             //@synthesize optionalSubpredicates=_optionalSubpredicates - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumNumberOfMatchedPredicates;              //@synthesize minimumNumberOfMatchedPredicates=_minimumNumberOfMatchedPredicates - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumNumberOfMatches; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)matchingControlItemsForControlItems:(id)arg1 ;
-(unsigned long long)maximumNumberOfMatches;
-(id)initWithRequiredSubpredicates:(id)arg1 optionalSubpredicates:(id)arg2 ;
-(id)initWithRequiredSubpredicates:(id)arg1 optionalSubpredicates:(id)arg2 minimumNumberOfMatchedPredicates:(unsigned long long)arg3 ;
-(NSArray *)requiredSubpredicates;
-(NSArray *)optionalSubpredicates;
-(id)allSubpredicates;
-(unsigned long long)minimumNumberOfMatchedPredicates;
@end

