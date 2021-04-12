/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrackSegment.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVCompositionTrackSegmentInternal, NSURL;

@interface AVCompositionTrackSegment : AVAssetTrackSegment <NSSecureCoding> {

	AVCompositionTrackSegmentInternal* _priv;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) NSURL * sourceURL; 
@property (nonatomic,readonly) int sourceTrackID; 
+(BOOL)supportsSecureCoding;
+(id)compositionTrackSegmentWithURL:(id)arg1 trackID:(int)arg2 sourceTimeRange:(SCD_Struct_AV8)arg3 targetTimeRange:(SCD_Struct_AV8)arg4 ;
+(id)compositionTrackSegmentWithTimeRange:(SCD_Struct_AV8)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)sourceURL;
-(int)sourceTrackID;
-(id)initWithURL:(id)arg1 trackID:(int)arg2 sourceTimeRange:(SCD_Struct_AV8)arg3 targetTimeRange:(SCD_Struct_AV8)arg4 ;
-(id)initWithTimeRange:(SCD_Struct_AV8)arg1 ;
-(id)_initWithTimeMapping:(SCD_Struct_CM11)arg1 ;
@end

