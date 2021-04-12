/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>

@class NSMutableArray;

@interface CRKFetchBooksOperation : CATOperation {

	/*^block*/id mBookLibraryProxy;
	NSMutableArray* mBooks;
	BOOL mIncludeImages;

}
-(BOOL)isAsynchronous;
-(void)main;
-(id)initWithBookLibraryProxy:(/*^block*/id)arg1 includeImages:(BOOL)arg2 ;
-(void)parseBookMetadataOperationDidFail:(id)arg1 ;
-(void)parsePDFMetadataOperationDidFail:(id)arg1 ;
-(id)initWithBookLibraryProxy:(/*^block*/id)arg1 ;
-(id)initWithBookLibraryProxy:(/*^block*/id)arg1 request:(id)arg2 error:(id*)arg3 ;
@end

