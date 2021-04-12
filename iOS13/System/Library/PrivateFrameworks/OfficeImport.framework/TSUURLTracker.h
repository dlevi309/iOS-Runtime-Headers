/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/TSUURLWrapper.h>

@class NSURL, TSUURLTrackerFilePresenter, NSData, NSString;

@interface TSUURLTracker : NSObject <TSUURLWrapper> {

	TSUURLTrackerFilePresenter* _filePresenter;

}

@property (readonly) NSURL * URL; 
@property (readonly) NSData * bookmarkData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)initWithURL:(id)arg1 ;
-(void)pause;
-(void)resume;
-(void)stop;
-(NSURL *)URL;
-(NSData *)bookmarkData;
-(id)initWithBookmarkData:(id)arg1 ;
-(id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3 ;
-(id)URLAndReturnError:(id*)arg1 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 ;
-(id)initWithBookmarkData:(id)arg1 delegate:(id)arg2 ;
@end

