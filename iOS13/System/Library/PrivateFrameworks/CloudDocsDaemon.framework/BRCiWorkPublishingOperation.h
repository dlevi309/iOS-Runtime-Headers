/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCItemID, NSArray, NSNumber, BRCServerZone, NSString;

@interface BRCiWorkPublishingOperation : _BRCOperation <BRCOperationSubclass> {

	BRCItemID* _itemID;
	NSArray* _recordIDs;
	BOOL _forPublish;
	BOOL _readonly;
	NSNumber* _sharingInfo;
	BRCServerZone* _serverZone;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(id)initWithDocumentItem:(id)arg1 forPublish:(BOOL)arg2 readonly:(BOOL)arg3 ;
-(void)_updateItemAfterShareCompleted;
@end

