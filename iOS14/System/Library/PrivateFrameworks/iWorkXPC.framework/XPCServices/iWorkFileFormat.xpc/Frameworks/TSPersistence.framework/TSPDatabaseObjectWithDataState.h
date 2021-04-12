/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPDatabaseObject.h>

@interface TSPDatabaseObjectWithDataState : TSPDatabaseObject {

	long long _dataState;

}
-(id)fileURL;
-(long long)dataState;
-(BOOL)hasDataState;
-(id)initWithIdentifier:(long long)arg1 classType:(int)arg2 dataState:(long long)arg3 ;
-(BOOL)hasFileState;
-(id)fileState;
@end

