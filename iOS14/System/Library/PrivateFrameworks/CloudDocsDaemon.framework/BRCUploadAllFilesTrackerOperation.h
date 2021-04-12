/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCAllItemsDidUploadTracker.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCAccountSession, NSMutableArray, NSMutableDictionary, NSString;

@interface BRCUploadAllFilesTrackerOperation : _BRCFrameworkOperation <BRCAllItemsDidUploadTracker, BRCOperationSubclass> {

	BRCAccountSession* _session;
	NSMutableArray* _zonesStillUploading;
	NSMutableArray* _hiddenZoneWithError;
	NSMutableDictionary* _perContainerIDError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldRetryForError:(id)arg1 ;
-(NSString *)description;
-(void)main;
-(void)cancel;
-(void)clientZone:(id)arg1 didFinishUploadingAllItemsWithError:(id)arg2 ;
-(id)initWithSession:(id)arg1 appLibraries:(id)arg2 ;
@end

