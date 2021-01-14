/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSReading/TSPObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSSet;

@interface TSPSupportMetadata : TSPObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _acknowledgedServerData;
	BOOL _isInCollaborationModeForArchiving;
	NSSet* _acknowledgedServerDataForArchiving;

}
-(id)initWithContext:(id)arg1 ;
-(void)commonInit;
-(id)packageLocator;
-(long long)tsp_identifier;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(unsigned char)componentRequiredPackageIdentifier;
-(void)takeSnapshotWithCollaborationMode:(BOOL)arg1 ;
-(BOOL)isDataAcknowledgedByServer:(id)arg1 ;
-(void)setData:(id)arg1 acknowledgedByServer:(BOOL)arg2 ;
-(void)resetAcknowledgedServerData;
-(void)isDataAcknowledgedByServer:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

