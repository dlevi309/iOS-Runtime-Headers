/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPComponentParserDelegate;
#import <TSPersistence/TSPersistence-Structs.h>
@interface TSPComponentParser : NSObject {

	id<TSPComponentParserDelegate> _delegate;
	unsigned long long _state;
	unsigned _archiveInfoLength;
	ArchiveInfo* _archiveInfo;
	unsigned _messagesLength;

}
-(id)init;
-(id)initWithDelegate:(id)arg1 ;
-(void)readWithChannel:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)readFromStream:(DispatchDataInputStream*)arg1 error:(id*)arg2 ;
-(unsigned long long)readArchiveInfoLengthFromStream:(DispatchDataInputStream*)arg1 error:(id*)arg2 ;
-(unsigned long long)readArchiveInfoFromStream:(DispatchDataInputStream*)arg1 error:(id*)arg2 ;
-(unsigned long long)readArchiveFromStream:(DispatchDataInputStream*)arg1 error:(id*)arg2 ;
@end

