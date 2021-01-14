/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol BRContainerHelper <NSObject>
@required
-(id)itemIDForURL:(id)arg1 error:(id*)arg2;
-(unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id*)arg3;
-(id)fetchContainerForURL:(id)arg1;
-(id)fetchAllContainersByIDWithError:(id*)arg1;
-(BOOL)canFetchAllContainersByID;

@end

