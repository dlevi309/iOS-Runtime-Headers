/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/


@protocol NUIGridArrangementDataSource <NSObject>
@optional
-(double)gridArrangement:(id)arg1 widthOfColumnAtIndex:(long long)arg2 spacingAfter:(double*)arg3;
-(double)gridArrangement:(id)arg1 heightOfRowAtIndex:(long long)arg2 spacingAfter:(double*)arg3;

@required
-(long long)numberOfItemsInGridArrangement:(id)arg1;
-(id)gridArrangement:(id)arg1 itemAtIndex:(long long)arg2 columns:(NSRange*)arg3 rows:(NSRange*)arg4 horizontalAlignment:(long long*)arg5 verticalAlignment:(long long*)arg6;

@end

