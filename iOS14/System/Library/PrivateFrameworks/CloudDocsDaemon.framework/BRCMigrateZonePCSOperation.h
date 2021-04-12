/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSMutableArray, NSString;

@interface BRCMigrateZonePCSOperation : _BRCOperation <BRCOperationSubclass> {

	NSMutableArray* _interestingZoneIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(void)_createCloudDocsZone:(/*^block*/id)arg1 ;
-(void)_fetchZonesNeedingMigration:(/*^block*/id)arg1 ;
@end

