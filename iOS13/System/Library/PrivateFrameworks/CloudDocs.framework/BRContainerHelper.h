/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/


@protocol BRContainerHelper <NSObject>
@required
-(id)itemIDForURL:(id)arg1 error:(id*)arg2;
-(unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id*)arg3;
-(id)fetchContainerForURL:(id)arg1;
-(id)fetchAllContainersByIDWithError:(id*)arg1;
-(BOOL)canFetchAllContainersByID;

@end

