/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithURL:(id)arg1 ;
-(void)pause;
-(NSData *)bookmarkData;
-(void)stop;
-(NSString *)description;
-(id)initWithBookmarkData:(id)arg1 ;
-(NSURL *)URL;
-(void)resume;
-(void)dealloc;
-(id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3 ;
-(id)URLAndReturnError:(id*)arg1 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 ;
-(id)initWithBookmarkData:(id)arg1 delegate:(id)arg2 ;
@end

