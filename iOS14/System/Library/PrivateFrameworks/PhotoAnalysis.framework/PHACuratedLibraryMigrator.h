/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)graphUpdateIsConsistent;
-(void)graphUpdateMadeProgress:(double)arg1 ;
-(void)graphUpdateDidStop;
-(void)delayMigrateCuratedLibraryActivity:(id)arg1 ;
-(void)migrateCuratedLibraryWithActivity:(id)arg1 executive:(id)arg2 ;
@end

