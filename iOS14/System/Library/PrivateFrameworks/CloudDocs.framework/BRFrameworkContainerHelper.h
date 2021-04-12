/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
*/

#import <libobjc.A.dylib/BRContainerHelper.h>

@class NSString;

@interface BRFrameworkContainerHelper : NSObject <BRContainerHelper>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)itemIDForURL:(id)arg1 error:(id*)arg2 ;
-(unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id*)arg3 ;
-(id)fetchContainerForURL:(id)arg1 ;
-(id)fetchAllContainersByIDWithError:(id*)arg1 ;
-(BOOL)canFetchAllContainersByID;
@end

