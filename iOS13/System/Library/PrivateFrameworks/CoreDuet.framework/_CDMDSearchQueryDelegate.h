/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/MDSearchQueryDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSMutableArray, NSString;

@interface _CDMDSearchQueryDelegate : NSObject <MDSearchQueryDelegate> {

	NSObject*<OS_dispatch_semaphore> _mdQuerySem;
	NSMutableArray* _recentMDSearchQueryResults;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> mdQuerySem;              //@synthesize mdQuerySem=_mdQuerySem - In the implementation block
@property (nonatomic,retain) NSMutableArray * recentMDSearchQueryResults;              //@synthesize recentMDSearchQueryResults=_recentMDSearchQueryResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableArray *)recentMDSearchQueryResults;
-(NSObject*<OS_dispatch_semaphore>)mdQuerySem;
-(void)searchQuery:(id)arg1 didReturnItems:(id)arg2 ;
-(void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2 ;
-(void)searchQuery:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setMdQuerySem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setRecentMDSearchQueryResults:(NSMutableArray *)arg1 ;
@end

