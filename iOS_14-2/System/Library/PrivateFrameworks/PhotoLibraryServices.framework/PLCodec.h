/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)supportsCloudUpload;
-(BOOL)isPlayable;
-(unsigned)_typeCodeFromString:(id)arg1 ;
@end

