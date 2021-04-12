/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/RCDictionaryPListRepresentationCoding.h>

@class NSURL, NSString;

@interface RCCompositionFragment : NSObject <NSMutableCopying, NSCopying, RCDictionaryPListRepresentationCoding> {

	SCD_Struct_RC3 _timeRangeInContentToUse;
	NSURL* _AVOutputURL;
	double _contentDuration;
	SCD_Struct_RC3 _timeRangeInComposition;

}

@property (nonatomic,retain) NSURL * AVOutputURL;                                 //@synthesize AVOutputURL=_AVOutputURL - In the implementation block
@property (assign,nonatomic) double contentDuration;                              //@synthesize contentDuration=_contentDuration - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC3 timeRangeInContentToUse;              //@synthesize timeRangeInContentToUse=_timeRangeInContentToUse - In the implementation block
@property (assign,nonatomic) SCD_Struct_RC3 timeRangeInComposition;               //@synthesize timeRangeInComposition=_timeRangeInComposition - In the implementation block
@property (nonatomic,readonly) NSURL * waveformURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setContentDuration:(double)arg1 ;
-(double)contentDuration;
-(NSURL *)waveformURL;
-(SCD_Struct_RC3)timeRangeInContentToUse;
-(SCD_Struct_RC3)timeRangeInComposition;
-(NSURL *)AVOutputURL;
-(id)initWithAVOutputURL:(id)arg1 contentDuration:(double)arg2 timeRangeInContentToUse:(SCD_Struct_RC3)arg3 timeRangeInComposition:(SCD_Struct_RC3)arg4 ;
-(id)initWithDictionaryPListRepresentation:(id)arg1 ;
-(id)dictionaryPListRepresentation;
-(void)deleteFromFilesystem;
-(void)moveAssetsToFragment:(id)arg1 ;
-(unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(BOOL)arg1 ;
-(id)fragmentByIntersectingTimeRangeInCompositionWithTimeRange:(SCD_Struct_RC3)arg1 ;
-(void)setAVOutputURL:(NSURL *)arg1 ;
-(void)setTimeRangeInComposition:(SCD_Struct_RC3)arg1 ;
-(void)setTimeRangeInContentToUse:(SCD_Struct_RC3)arg1 ;
@end

