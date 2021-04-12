/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <libobjc.A.dylib/PUTransientImageManager.h>

@class NSMutableDictionary, NSString;

@interface CAMTransientImageManager : NSObject <PUTransientImageManager> {

	NSMutableDictionary* __pairedVideosByPairedUUID;
	NSMutableDictionary* __activeRequestsByPairedUUID;

}

@property (nonatomic,readonly) NSMutableDictionary * _pairedVideosByPairedUUID;                //@synthesize _pairedVideosByPairedUUID=__pairedVideosByPairedUUID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _activeRequestsByPairedUUID;              //@synthesize _activeRequestsByPairedUUID=__activeRequestsByPairedUUID - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEmpty;
-(void)requestPairedVideoURLForUUID:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)insertPairedVideoWithConvertible:(id)arg1 filterType:(long long)arg2 ;
-(void)removePairedVideoForUUID:(id)arg1 ;
-(id)existingPairedVideoUUIDs;
-(NSMutableDictionary *)_pairedVideosByPairedUUID;
-(NSMutableDictionary *)_activeRequestsByPairedUUID;
-(void)_handleRequestTimeout:(id)arg1 ;
-(id)existingPairedVideoForUUID:(id)arg1 ;
@end

