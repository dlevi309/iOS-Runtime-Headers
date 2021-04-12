/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUQuickControlItemPredicate.h>

@class NSString;

@interface HUQuickControlSingleItemPredicate : NSObject <HUQuickControlItemPredicate> {

	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                                   //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfMatches; 
+(id)predicateWithControlItemClass:(Class)arg1 ;
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(BOOL)matchesControlItem:(id)arg1 ;
-(id)matchingControlItemsForControlItems:(id)arg1 ;
-(unsigned long long)maximumNumberOfMatches;
@end

