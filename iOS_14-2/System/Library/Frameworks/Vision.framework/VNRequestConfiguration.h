/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VNProcessingDevice;

@interface VNRequestConfiguration : NSObject <NSCopying> {

	BOOL _preferBackgroundProcessing;
	Class _requestClass;
	unsigned long long _resolvedRevision;
	unsigned long long _detectionLevel;
	VNProcessingDevice* _processingDevice;
	unsigned long long _metalContextPriority;
	unsigned long long _modelFileBackingStore;

}

@property (nonatomic,readonly) Class requestClass;                                  //@synthesize requestClass=_requestClass - In the implementation block
@property (assign,nonatomic) unsigned long long resolvedRevision;                   //@synthesize resolvedRevision=_resolvedRevision - In the implementation block
@property (assign,nonatomic) unsigned long long detectionLevel;                     //@synthesize detectionLevel=_detectionLevel - In the implementation block
@property (nonatomic,retain) VNProcessingDevice * processingDevice;                 //@synthesize processingDevice=_processingDevice - In the implementation block
@property (assign,nonatomic) unsigned long long metalContextPriority;               //@synthesize metalContextPriority=_metalContextPriority - In the implementation block
@property (assign,nonatomic) BOOL preferBackgroundProcessing;                       //@synthesize preferBackgroundProcessing=_preferBackgroundProcessing - In the implementation block
@property (assign,nonatomic) unsigned long long modelFileBackingStore;              //@synthesize modelFileBackingStore=_modelFileBackingStore - In the implementation block
-(Class)requestClass;
-(VNProcessingDevice *)processingDevice;
-(void)setDetectionLevel:(unsigned long long)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setMetalContextPriority:(unsigned long long)arg1 ;
-(void)setPreferBackgroundProcessing:(BOOL)arg1 ;
-(void)setProcessingDevice:(VNProcessingDevice *)arg1 ;
-(void)setResolvedRevision:(unsigned long long)arg1 ;
-(unsigned long long)detectionLevel;
-(id)description;
-(unsigned long long)modelFileBackingStore;
-(unsigned long long)metalContextPriority;
-(unsigned long long)resolvedRevision;
-(id)_allPropertyNames;
-(BOOL)preferBackgroundProcessing;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setModelFileBackingStore:(unsigned long long)arg1 ;
@end

