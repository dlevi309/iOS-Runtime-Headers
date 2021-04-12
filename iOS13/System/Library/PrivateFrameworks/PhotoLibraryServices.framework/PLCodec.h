/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLCodecIdentity.h>

@class NSString;

@interface PLCodec : PLManagedObject <PLCodecIdentity>

@property (nonatomic,copy) NSString * fourCharCodeName; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
+(id)codecFromFourCharCodeName:(id)arg1 createIfMissing:(BOOL)arg2 context:(id)arg3 ;
+(id)commonCodec_HEVC_inContext:(id)arg1 ;
+(id)commonCodec_H264_inContext:(id)arg1 ;
-(BOOL)isPlayable;
-(BOOL)supportsCloudUpload;
-(unsigned)_typeCodeFromString:(id)arg1 ;
@end

