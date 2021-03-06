/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUQuickControlItemPredicate.h>

@class NSString;

@interface HUQuickControlSingleItemPredicate : NSObject <HUQuickControlItemPredicate> {

	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                                   //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumNumberOfMatches; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateWithControlItemClass:(Class)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(BOOL)matchesControlItem:(id)arg1 ;
-(id)matchingControlItemsForControlItems:(id)arg1 ;
-(unsigned long long)maximumNumberOfMatches;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

