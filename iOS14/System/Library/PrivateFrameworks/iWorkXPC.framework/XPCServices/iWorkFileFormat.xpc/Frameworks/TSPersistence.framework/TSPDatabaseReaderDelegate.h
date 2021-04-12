/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPDatabaseReaderDelegate <TSPReaderDelegate>
@required
-(id)databaseReader:(id)arg1 wantsDataForDatabaseObjectIdentifier:(long long)arg2 filename:(id)arg3;
-(id)databaseReader:(id)arg1 wantsDataForAppRelativePath:(id)arg2 filename:(id)arg3;

@end

