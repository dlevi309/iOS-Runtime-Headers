/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PLVideoResource.h>

@protocol PLResource;
@class NSString;

@interface PLVideoInternalResource : NSObject <PLVideoResource> {

	id<PLResource> _backingResource;

}

@property (nonatomic,readonly) id<PLResource> backingResource;              //@synthesize backingResource=_backingResource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isPlayable;
-(BOOL)isLocallyAvailable;
-(BOOL)isLocallyGeneratable;
-(BOOL)isStreamable;
-(BOOL)isRemotelyAvailable;
-(BOOL)isMediumHighQuality;
-(BOOL)isOriginalVideoComplement;
-(BOOL)matchesOrExceedsQualityLevel:(unsigned)arg1 ;
-(id)fileURLIfLocal;
-(id)initWithBackingResource:(id)arg1 ;
-(id<PLResource>)backingResource;
@end

