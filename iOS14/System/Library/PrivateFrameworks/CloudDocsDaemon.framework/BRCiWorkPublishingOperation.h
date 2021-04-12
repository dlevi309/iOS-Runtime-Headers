/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(id)initWithDocumentItem:(id)arg1 forPublish:(BOOL)arg2 readonly:(BOOL)arg3 ;
-(void)_updateItemAfterShareCompleted;
@end

