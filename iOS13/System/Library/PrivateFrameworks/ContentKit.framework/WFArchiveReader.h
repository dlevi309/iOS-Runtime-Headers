/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


#import <ContentKit/ContentKit-Structs.h>
@interface WFArchiveReader : NSObject {

	archiveRef _archive;

}

@property (nonatomic,readonly) archiveRef archive;              //@synthesize archive=_archive - In the implementation block
-(archiveRef)archive;
-(id)initWithArchiveFile:(id)arg1 error:(id*)arg2 ;
-(id)extractArchiveToDestinationURL:(id)arg1 error:(id*)arg2 ;
@end

