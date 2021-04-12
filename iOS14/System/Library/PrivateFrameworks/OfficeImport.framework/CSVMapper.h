/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class NSMutableArray, NSString;

@interface CSVMapper : CMMapper {

	NSMutableArray* mRows;
	NSString* mFileName;
	unsigned long long mColumnCount;
	CGSize mPageSize;

}
-(CGSize)pageSize;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithRows:(id)arg1 fileName:(id)arg2 columnCount:(unsigned long long)arg3 archiver:(id)arg4 ;
@end

