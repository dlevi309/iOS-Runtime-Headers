/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AVDispatchOnce, NSSet;

@interface AVMediaFileType : NSObject <NSCopying> {

	NSString* _uti;
	AVDispatchOnce* _supportsSampleReferencesOnce;
	BOOL _supportsSampleReferences;

}

@property (nonatomic,readonly) NSString * defaultFileExtension; 
@property (nonatomic,readonly) NSSet * supportedMediaTypes; 
@property (nonatomic,readonly) BOOL supportsSampleReferences; 
@property (nonatomic,readonly) NSString * UTI; 
@property (nonatomic,readonly) NSString * figFormatReaderFileFormat; 
@property (nonatomic,readonly) unsigned audioFileTypeID; 
+(void)initialize;
+(id)allFileTypeIdentifiers;
+(id)_mediaFileTypeWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)mediaFileTypeWithFileTypeIdentifier:(id)arg1 ;
+(id)isoFileTypes;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UTI;
-(BOOL)supportsSampleReferences;
-(NSString *)figFormatReaderFileFormat;
-(NSSet *)supportedMediaTypes;
-(BOOL)supportsFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)supportsOutputSettings:(id)arg1 reason:(id*)arg2 ;
-(unsigned)audioFileTypeID;
-(id)initWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2 ;
-(NSString *)defaultFileExtension;
@end

