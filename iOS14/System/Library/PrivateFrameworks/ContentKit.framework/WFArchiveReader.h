/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

