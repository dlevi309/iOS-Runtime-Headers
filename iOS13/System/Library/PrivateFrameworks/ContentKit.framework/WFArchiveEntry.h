/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


#import <ContentKit/ContentKit-Structs.h>
@interface WFArchiveEntry : NSObject {

	archive_entryRef _entry;
	/*^block*/id _dataProvider;

}

@property (nonatomic,readonly) archive_entryRef entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,readonly) id dataProvider;                     //@synthesize dataProvider=_dataProvider - In the implementation block
+(id)archiveEntriesWithTopLevelFileRepresentation:(id)arg1 usedFilenames:(id)arg2 ;
-(void)dealloc;
-(archive_entryRef)entry;
-(id)dataProvider;
-(id)initWithDirectoryName:(id)arg1 ;
-(id)initWithFilename:(id)arg1 fileRepresentation:(id)arg2 ;
-(id)initWithFilename:(id)arg1 fileType:(unsigned short)arg2 filePermission:(unsigned short)arg3 fileSize:(long long)arg4 modificationDate:(id)arg5 creationDate:(id)arg6 dataProvider:(/*^block*/id)arg7 ;
@end

