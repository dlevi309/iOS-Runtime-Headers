/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@class NSString;

@interface CRKFTSEnumeration : NSObject {

	NSString* mDirectoryPath;
	int mOptions;

}
+(int)defaultOptions;
-(id)init;
-(id)initWithDirectoryPath:(id)arg1 ;
-(id)entriesWithError:(id*)arg1 ;
-(id)initWithDirectoryPath:(id)arg1 options:(int)arg2 ;
-(SCD_Struct_CR3*)makeFTSWithError:(id*)arg1 ;
-(id)readAllEntriesFromFTS:(SCD_Struct_CR3*)arg1 error:(id*)arg2 ;
-(void)closeFTS:(SCD_Struct_CR3*)arg1 ;
-(id)readNextEntryFromFTS:(SCD_Struct_CR3*)arg1 error:(id*)arg2 ;
-(BOOL)shouldSkipEntry:(ftsent*)arg1 ;
@end

