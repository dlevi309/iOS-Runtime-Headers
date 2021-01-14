/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/JFXMediaMetadataReader.h>

@protocol JFXMediaMetadataReader, OS_dispatch_queue;
@class NSError, JFXARMetadataMediaReaderItem, NSObject, NSString;

@interface JFXARMetadataMediaReader : NSObject <JFXMediaMetadataReader> {

	id<JFXMediaMetadataReader> _reader;
	NSError* _lastDecodeError;
	JFXARMetadataMediaReaderItem* _cachedARMetadata;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;

}

@property (nonatomic,readonly) id<JFXMediaMetadataReader> reader;                              //@synthesize reader=_reader - In the implementation block
@property (nonatomic,retain) NSError * lastDecodeError;                                        //@synthesize lastDecodeError=_lastDecodeError - In the implementation block
@property (nonatomic,retain) JFXARMetadataMediaReaderItem * cachedARMetadata;                  //@synthesize cachedARMetadata=_cachedARMetadata - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> synchronizationQueue;              //@synthesize synchronizationQueue=_synchronizationQueue - In the implementation block
@property (nonatomic,readonly) SCD_Struct_JF4 readableTimeRange; 
@property (assign,nonatomic) BOOL isScrubbing; 
@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) unsigned long long signPostID; 
@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id<JFXMediaMetadataReader>)reader;
-(id)initWithMetadataReader:(id)arg1 ;
-(void)setIsScrubbing:(BOOL)arg1 ;
-(NSError *)error;
-(NSString *)name;
-(NSObject*<OS_dispatch_queue>)synchronizationQueue;
-(BOOL)isScrubbing;
-(long long)status;
-(BOOL)beginReadingAtTimeRange:(SCD_Struct_JF4)arg1 ;
-(BOOL)beginReading;
-(SCD_Struct_JF4)readableTimeRange;
-(unsigned long long)signPostID;
-(id)arMetadataItemForTime:(SCD_Struct_JF3)arg1 ;
-(JFXARMetadataMediaReaderItem *)cachedARMetadata;
-(id)metadataForTime:(SCD_Struct_JF3)arg1 ;
-(id)JFX_ARMetadataFromMetadataReaderItem:(id)arg1 ;
-(void)setCachedARMetadata:(JFXARMetadataMediaReaderItem *)arg1 ;
-(void)setLastDecodeError:(NSError *)arg1 ;
-(NSError *)lastDecodeError;
@end

