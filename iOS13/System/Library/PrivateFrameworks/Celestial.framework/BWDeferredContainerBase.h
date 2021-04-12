/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol OS_dispatch_queue, OS_os_transaction;
#import <Celestial/Celestial-Structs.h>
@class NSObject, NSString, NSDictionary, BWStillImageCaptureSettings, FigCaptureStillImageSettings, NSMutableDictionary, NSMutableArray, NSArray;

@interface BWDeferredContainerBase : NSObject {

	long long _creationTimeNS;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_os_transaction> _transaction;
	NSString* _baseFolder;
	NSString* _applicationID;
	NSString* _captureRequestIdentifier;
	long long _manifestVersion;
	NSDictionary* _manifest;
	BWStillImageCaptureSettings* _stillImageCaptureSettings;
	FigCaptureStillImageSettings* _stillImageSettings;
	NSMutableDictionary* _bufferManifest;
	NSMutableArray* _bufferAttributeManifest;
	NSMutableArray* _photoDescriptorDictionaries;
	NSMutableArray* _intermediateManifest;

}

@property (nonatomic,readonly) unsigned processingType; 
@property (nonatomic,readonly) NSString * applicationID; 
@property (nonatomic,readonly) NSString * captureRequestIdentifier;                               //@synthesize captureRequestIdentifier=_captureRequestIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long captureRequestIdentifierBytesLow; 
@property (nonatomic,readonly) unsigned long long captureRequestIdentifierBytesHigh; 
@property (nonatomic,readonly) long long manifestVersion;                                         //@synthesize manifestVersion=_manifestVersion - In the implementation block
@property (nonatomic,readonly) NSDictionary * manifest; 
@property (nonatomic,readonly) BWStillImageCaptureSettings * captureSettings;                     //@synthesize stillImageCaptureSettings=_stillImageCaptureSettings - In the implementation block
@property (nonatomic,readonly) FigCaptureStillImageSettings * settings;                           //@synthesize stillImageSettings=_stillImageSettings - In the implementation block
@property (nonatomic,readonly) NSArray * bufferAttributeManifest;                                 //@synthesize bufferAttributeManifest=_bufferAttributeManifest - In the implementation block
@property (nonatomic,readonly) NSArray * intermediateTags; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(FigCaptureStillImageSettings *)settings;
-(int)flush;
-(int)_validate;
-(NSString *)captureRequestIdentifier;
-(NSDictionary *)manifest;
-(BWStillImageCaptureSettings *)captureSettings;
-(BOOL)hasTag:(id)arg1 ;
-(NSString *)applicationID;
-(unsigned)processingType;
-(int)_compressionSettingsForProfile:(int)arg1 format:(int*)arg2 options:(id*)arg3 ;
-(id)_archiveObject:(id)arg1 error:(id*)arg2 ;
-(id)_unarchiveObject:(id)arg1 classes:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)_getUUIDBytes:(id)arg1 high:(BOOL)arg2 ;
-(id)initWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 baseFolder:(id)arg3 queuePriority:(unsigned)arg4 err:(int*)arg5 ;
-(int)_writeCompressedImage:(void*)arg1 URL:(id)arg2 session:(FigPhotoCompressionSessionRef)arg3 profile:(int)arg4 ;
-(BOOL)_archiveObjectWithPath:(id)arg1 object:(id)arg2 error:(id*)arg3 ;
-(id)_unarchiveObjectWithPath:(id)arg1 classes:(id)arg2 error:(id*)arg3 ;
-(BOOL)valid:(int*)arg1 ;
-(unsigned long long)captureRequestIdentifierBytesLow;
-(unsigned long long)captureRequestIdentifierBytesHigh;
-(long long)manifestVersion;
-(NSArray *)bufferAttributeManifest;
-(id)intermediateManifest;
-(NSArray *)intermediateTags;
-(id)intermediateTagsOfType:(int)arg1 ;
-(id)_intermediateDescriptorForTag:(id)arg1 ;
-(void)_removeIntermediateDescriptorForTag:(id)arg1 ;
-(id)_buildManifest:(int*)arg1 ;
-(int)_writeManifest;
@end

