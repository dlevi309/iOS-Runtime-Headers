/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@class NSCountedSet;

@interface PFBookmarkCoordinator : NSObject {

	NSCountedSet* _managedPaths;
	NSCountedSet* _accessedPaths;

}
+(id)sharedInstance;
+(BOOL)urlHasSandboxExtension:(id)arg1 ;
-(id)init;
-(id)description;
-(id)startAccesingURLForBookmarkData:(id)arg1 error:(id*)arg2 ;
-(void)_incrementRefcountForURL:(id)arg1 callStart:(BOOL)arg2 ;
-(void)_decrementRefcountForURL:(id)arg1 ;
-(void)startAccessingURL:(id)arg1 ;
-(void)stopAccessingURL:(id)arg1 ;
-(void)stopAccessingURLs:(id)arg1 ;
-(void)addPowerBoxURL:(id)arg1 ;
-(void)logRefCountForUrl:(id)arg1 withPrefix:(id)arg2 sender:(id)arg3 ;
@end

