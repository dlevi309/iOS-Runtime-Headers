/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {

	unsigned long long mPriority;
	int mType;
	int mScope;
	EDCollection* mPivotAreas;

}
+(id)pivotConditionalFormat;
-(id)init;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(int)scope;
-(void)setScope:(int)arg1 ;
-(id)pivotAreas;
@end

