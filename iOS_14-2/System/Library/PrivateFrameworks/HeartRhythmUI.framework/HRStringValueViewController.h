/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/

#import <HealthUI/HKTableViewController.h>

@class NSString;

@interface HRStringValueViewController : HKTableViewController {

	NSString* _value;

}

@property (nonatomic,copy,readonly) NSString * value;              //@synthesize value=_value - In the implementation block
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)initWithStringValue:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSString *)value;
@end

