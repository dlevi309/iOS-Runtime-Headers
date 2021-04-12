/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <SystemStatus/STCallingStatusDomainData.h>
#import <libobjc.A.dylib/STMutableStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/STMutableStatusDomainData.h>

@class STMutableActivityAttributionCatalog, NSSet, NSString;

@interface STMutableCallingStatusDomainData : STCallingStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (nonatomic,copy,readonly) STMutableActivityAttributionCatalog * attributionCatalog; 
@property (nonatomic,copy) NSSet * activeCallAttributions; 
@property (nonatomic,copy) NSSet * ringingCallAttributions; 
@property (nonatomic,copy) NSSet * activeVideoConferenceAttributions; 
@property (nonatomic,copy) NSSet * ringingVideoConferenceAttributions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAttributionCatalog:(id)arg1 ;
-(STMutableActivityAttributionCatalog *)attributionCatalog;
-(void)setActiveVideoConferenceAttributions:(NSSet *)arg1 ;
-(BOOL)applyDiff:(id)arg1 ;
-(void)setRingingCallAttributions:(NSSet *)arg1 ;
-(void)removeRingingCallAttribution:(id)arg1 ;
-(void)removeRingingVideoConferenceAttribution:(id)arg1 ;
-(void)removeActiveVideoConferenceAttribution:(id)arg1 ;
-(void)setRingingVideoConferenceAttributions:(NSSet *)arg1 ;
-(void)addActiveVideoConferenceAttribution:(id)arg1 ;
-(void)addActiveCallAttribution:(id)arg1 ;
-(void)addRingingCallAttribution:(id)arg1 ;
-(void)removeActiveCallAttribution:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActiveCallAttributions:(NSSet *)arg1 ;
-(void)addRingingVideoConferenceAttribution:(id)arg1 ;
@end

