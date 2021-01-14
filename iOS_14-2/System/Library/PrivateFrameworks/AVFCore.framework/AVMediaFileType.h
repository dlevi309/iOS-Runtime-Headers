/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
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
+(CFStringRef)figFileTypeProfileFromAVFileTypeProfile:(id)arg1 ;
+(id)isoFileTypes;
+(id)allFileTypeIdentifiers;
+(id)mediaFileTypeWithFileTypeIdentifier:(id)arg1 ;
+(id)_mediaFileTypeWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2 ;
-(id)initWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2 ;
-(BOOL)supportsOutputSettings:(id)arg1 reason:(id*)arg2 ;
-(NSSet *)supportedMediaTypes;
-(BOOL)supportsFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)description;
-(NSString *)defaultFileExtension;
-(unsigned)audioFileTypeID;
-(NSString *)UTI;
-(NSString *)figFormatReaderFileFormat;
-(BOOL)supportsSampleReferences;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

