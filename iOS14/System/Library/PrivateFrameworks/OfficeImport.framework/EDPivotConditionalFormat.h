/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setScope:(int)arg1 ;
-(int)scope;
-(id)init;
-(void)setType:(int)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(id)pivotAreas;
@end

