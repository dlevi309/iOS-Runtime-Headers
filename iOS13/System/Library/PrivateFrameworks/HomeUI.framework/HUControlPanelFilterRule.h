/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUControlPanelRule.h>

@class NSString;

@interface HUControlPanelFilterRule : NSObject <HUControlPanelRule> {

	double _priority;
	/*^block*/id _filter;

}

@property (nonatomic,copy) id filter;                               //@synthesize filter=_filter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double priority;                       //@synthesize priority=_priority - In the implementation block
+(id)ruleWithFilter:(/*^block*/id)arg1 ;
-(double)priority;
-(void)setPriority:(double)arg1 ;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)initWithFilter:(/*^block*/id)arg1 ;
-(BOOL)ruleMatchesItem:(id)arg1 ;
@end

