/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)requestPairedVideoURLForUUID:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(BOOL)isEmpty;
-(id)insertPairedVideoWithConvertible:(id)arg1 filterType:(long long)arg2 ;
-(void)removePairedVideoForUUID:(id)arg1 ;
-(id)existingPairedVideoUUIDs;
-(NSMutableDictionary *)_pairedVideosByPairedUUID;
-(NSMutableDictionary *)_activeRequestsByPairedUUID;
-(void)_handleRequestTimeout:(id)arg1 ;
-(id)existingPairedVideoForUUID:(id)arg1 ;
@end

