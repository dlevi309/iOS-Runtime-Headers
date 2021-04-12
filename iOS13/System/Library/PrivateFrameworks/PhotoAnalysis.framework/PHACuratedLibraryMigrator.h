/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <libobjc.A.dylib/PHAGraphRegistration.h>

@class NSString;

@interface PHACuratedLibraryMigrator : NSObject <PHAGraphRegistration>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)wantsLiveGraphUpdates;
-(BOOL)wantsGraphUpdateNotifications;
-(void)graphUpdateMadeProgress:(double)arg1 ;
-(void)graphUpdateIsConsistent;
-(void)graphUpdateDidStop;
-(void)delayMigrateCuratedLibraryActivity:(id)arg1 ;
-(void)migrateCuratedLibraryWithActivity:(id)arg1 executive:(id)arg2 ;
@end

