/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

