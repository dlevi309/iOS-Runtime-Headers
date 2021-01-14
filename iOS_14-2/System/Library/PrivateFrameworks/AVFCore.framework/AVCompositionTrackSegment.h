/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetTrackSegment.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVCompositionTrackSegmentInternal, NSURL;

@interface AVCompositionTrackSegment : AVAssetTrackSegment <NSSecureCoding> {

	AVCompositionTrackSegmentInternal* _priv;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) NSURL * sourceURL; 
@property (nonatomic,readonly) int sourceTrackID; 
+(BOOL)supportsSecureCoding;
+(id)compositionTrackSegmentWithTimeRange:(SCD_Struct_AV7)arg1 ;
+(id)compositionTrackSegmentWithURL:(id)arg1 trackID:(int)arg2 sourceTimeRange:(SCD_Struct_AV7)arg3 targetTimeRange:(SCD_Struct_AV7)arg4 ;
-(id)_initWithTimeMapping:(SCD_Struct_CM9)arg1 ;
-(id)initWithURL:(id)arg1 trackID:(int)arg2 sourceTimeRange:(SCD_Struct_AV7)arg3 targetTimeRange:(SCD_Struct_AV7)arg4 ;
-(NSURL *)sourceURL;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithTimeRange:(SCD_Struct_AV7)arg1 ;
-(int)sourceTrackID;
@end

