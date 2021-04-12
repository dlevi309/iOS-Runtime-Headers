/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUControlPanelRule.h>

@class NSString;

@interface HUControlPanelFilterRule : NSObject <HUControlPanelRule> {

	double _priority;
	/*^block*/id _filter;

}

@property (nonatomic,copy) id filter;                               //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) double priority;                       //@synthesize priority=_priority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleWithFilter:(/*^block*/id)arg1 ;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)initWithFilter:(/*^block*/id)arg1 ;
-(double)priority;
-(void)setPriority:(double)arg1 ;
-(BOOL)ruleMatchesItem:(id)arg1 ;
@end

