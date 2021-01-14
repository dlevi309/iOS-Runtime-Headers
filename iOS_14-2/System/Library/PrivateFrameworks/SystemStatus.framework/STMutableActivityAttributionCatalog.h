/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <SystemStatus/STActivityAttributionCatalog.h>
#import <libobjc.A.dylib/STMutableStatusDomainData.h>
#import <libobjc.A.dylib/STMutableStatusDomainDataDifferencing.h>

@class NSString;

@interface STMutableActivityAttributionCatalog : STActivityAttributionCatalog <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeAttribution:(id)arg1 forKey:(id)arg2 ;
-(void)setAttributions:(id)arg1 forKey:(id)arg2 ;
-(BOOL)applyDiff:(id)arg1 ;
-(void)removeAttributionsForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addAttribution:(id)arg1 forKey:(id)arg2 ;
@end

