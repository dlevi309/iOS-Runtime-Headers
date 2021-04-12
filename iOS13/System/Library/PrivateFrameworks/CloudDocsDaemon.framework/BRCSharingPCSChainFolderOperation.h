/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCServerItem, BRCAppLibrary, BRCItemID, NSString;

@interface BRCSharingPCSChainFolderOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	BRCServerItem* _serverItem;
	BRCAppLibrary* _appLibrary;
	unsigned long long _chainedRecordsCount;

}

@property (nonatomic,readonly) BRCItemID * rootItemID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)initWithItem:(id)arg1 ;
-(id)createActivity;
-(BRCItemID *)rootItemID;
-(void)_performPCSChainBatch;
@end

