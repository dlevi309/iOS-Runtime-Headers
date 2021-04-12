/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/SCRCMathRowExpression.h>

@interface SCRCMathTableCellExpression : SCRCMathRowExpression {

	BOOL _didGetTablePosition;
	unsigned long long _rowIndex;
	unsigned long long _columnIndex;
	unsigned long long _tableRowCount;
	unsigned long long _tableColumnCount;

}
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)prefixForChildAtIndex:(unsigned long long)arg1 ;
-(id)suffixForChildAtIndex:(unsigned long long)arg1 ;
-(id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)mathMLTag;
-(void)_getTableDataIfNecessary;
-(id)_prefixForCell;
-(id)_suffixForCell;
@end

