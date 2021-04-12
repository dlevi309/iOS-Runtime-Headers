/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFControlPanelItemRule.h>

@class NSString;

@interface HFControlPanelItemSingleControlRule : NSObject <HFControlPanelItemRule> {

	/*^block*/id _filter;
	/*^block*/id _displayResultsGenerator;

}

@property (nonatomic,copy,readonly) id filter;                               //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy,readonly) id displayResultsGenerator;              //@synthesize displayResultsGenerator=_displayResultsGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)filter;
-(id)displayResultsGenerator;
-(id)controlPanelItemForControlItems:(id)arg1 ;
-(id)initWithFilter:(/*^block*/id)arg1 displayResultsGenerator:(/*^block*/id)arg2 ;
@end

