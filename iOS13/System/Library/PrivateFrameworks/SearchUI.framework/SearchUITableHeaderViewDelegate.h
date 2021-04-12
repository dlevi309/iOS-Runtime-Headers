/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

@class NSString;


@protocol SearchUITableHeaderViewDelegate <NSObject>
@property (readonly) NSString * queryString; 
@required
-(NSString *)queryString;
-(BOOL)sectionIsClearable:(id)arg1;
-(void)clearResultsFromSection:(id)arg1;
-(void)toggleExpansionForSection:(id)arg1;

@end

