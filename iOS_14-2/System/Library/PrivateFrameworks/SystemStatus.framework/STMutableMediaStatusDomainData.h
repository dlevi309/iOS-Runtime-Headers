/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <SystemStatus/STMediaStatusDomainData.h>
#import <libobjc.A.dylib/STMutableStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/STMutableStatusDomainData.h>

@class STMutableActivityAttributionCatalog, NSSet, NSString;

@interface STMutableMediaStatusDomainData : STMediaStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (nonatomic,copy,readonly) STMutableActivityAttributionCatalog * attributionCatalog; 
@property (nonatomic,copy) NSSet * audioRecordingAttributions; 
@property (nonatomic,copy) NSSet * mutedAudioRecordingAttributions; 
@property (nonatomic,copy) NSSet * cameraCaptureAttributions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addAudioRecordingAttribution:(id)arg1 ;
-(id)initWithAttributionCatalog:(id)arg1 ;
-(void)removeMutedAudioRecordingAttribution:(id)arg1 ;
-(void)removeCameraCaptureAttribution:(id)arg1 ;
-(STMutableActivityAttributionCatalog *)attributionCatalog;
-(void)setAudioRecordingAttributions:(NSSet *)arg1 ;
-(void)removeAudioRecordingAttribution:(id)arg1 ;
-(void)addMutedAudioRecordingAttribution:(id)arg1 ;
-(BOOL)applyDiff:(id)arg1 ;
-(void)addCameraCaptureAttribution:(id)arg1 ;
-(void)setMutedAudioRecordingAttributions:(NSSet *)arg1 ;
-(void)setCameraCaptureAttributions:(NSSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

