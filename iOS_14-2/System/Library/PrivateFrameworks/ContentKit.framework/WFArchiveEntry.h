/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(archive_entryRef)entry;
-(id)dataProvider;
-(void)dealloc;
-(id)initWithDirectoryName:(id)arg1 ;
-(id)initWithFilename:(id)arg1 fileRepresentation:(id)arg2 ;
-(id)initWithFilename:(id)arg1 fileType:(unsigned short)arg2 filePermission:(unsigned short)arg3 fileSize:(long long)arg4 modificationDate:(id)arg5 creationDate:(id)arg6 dataProvider:(/*^block*/id)arg7 ;
@end

