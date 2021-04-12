/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@class NSMutableArray;

@interface CRKFetchBooksOperation : CATOperation {

	/*^block*/id mBookLibraryProxy;
	NSMutableArray* mBooks;
	BOOL mIncludeImages;

}
-(void)main;
-(BOOL)isAsynchronous;
-(id)initWithBookLibraryProxy:(/*^block*/id)arg1 includeImages:(BOOL)arg2 ;
-(void)parseBookMetadataOperationDidFail:(id)arg1 ;
-(void)parsePDFMetadataOperationDidFail:(id)arg1 ;
-(id)initWithBookLibraryProxy:(/*^block*/id)arg1 ;
-(id)initWithBookLibraryProxy:(/*^block*/id)arg1 request:(id)arg2 error:(id*)arg3 ;
@end

