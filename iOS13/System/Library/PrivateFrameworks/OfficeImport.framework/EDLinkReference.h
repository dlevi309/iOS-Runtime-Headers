/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface EDLinkReference : NSObject {

	unsigned long long mLinkIndex;
	unsigned long long mFirstSheetIndex;
	unsigned long long mLastSheetIndex;

}
+(id)linkReferenceWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)firstSheetIndex;
-(unsigned long long)lastSheetIndex;
-(unsigned long long)linkIndex;
-(id)initWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3 ;
-(BOOL)isEqualToLinkReference:(id)arg1 ;
-(void)setFirstSheetIndex:(unsigned long long)arg1 ;
-(void)setLastSheetIndex:(unsigned long long)arg1 ;
-(void)setLinkIndex:(unsigned long long)arg1 ;
-(BOOL)isWorkbookLevelReference;
@end

