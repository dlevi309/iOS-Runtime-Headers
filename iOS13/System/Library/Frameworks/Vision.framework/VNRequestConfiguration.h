/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDetectionLevel:(unsigned long long)arg1 ;
-(id)_allPropertyNames;
-(Class)requestClass;
-(id)initWithRequestClass:(Class)arg1 ;
-(VNProcessingDevice *)processingDevice;
-(BOOL)preferBackgroundProcessing;
-(unsigned long long)detectionLevel;
-(void)setPreferBackgroundProcessing:(BOOL)arg1 ;
-(unsigned long long)modelFileBackingStore;
-(void)setModelFileBackingStore:(unsigned long long)arg1 ;
-(unsigned long long)metalContextPriority;
-(void)setMetalContextPriority:(unsigned long long)arg1 ;
-(void)setProcessingDevice:(VNProcessingDevice *)arg1 ;
-(unsigned long long)resolvedRevision;
-(void)setResolvedRevision:(unsigned long long)arg1 ;
@end

