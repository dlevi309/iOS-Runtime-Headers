/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <libobjc.A.dylib/HKDataMetadataSectionProtocol.h>

@interface HKDataMetadataSection : NSObject <HKDataMetadataSectionProtocol>
-(id)sectionTitle;
-(id)sectionFooter;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)willDisplayCell:(id)arg1 forIndex:(unsigned long long)arg2 tableView:(id)arg3 ;
@end

