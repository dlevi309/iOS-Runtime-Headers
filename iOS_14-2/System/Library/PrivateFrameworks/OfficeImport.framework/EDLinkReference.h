/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@interface EDLinkReference : NSObject {

	unsigned long long mLinkIndex;
	unsigned long long mFirstSheetIndex;
	unsigned long long mLastSheetIndex;

}
+(id)linkReferenceWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3 ;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
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

