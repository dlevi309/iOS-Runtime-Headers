/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, CPLResource;

@interface CPLAdjustments : NSObject <NSSecureCoding, NSCopying> {

	NSString* _adjustmentType;
	NSString* _adjustmentCompoundVersion;
	NSString* _adjustmentCreatorCode;
	unsigned long long _adjustmentSourceType;
	NSData* _simpleAdjustmentData;
	NSString* _similarToOriginalAdjustmentsFingerprint;
	NSString* _otherAdjustmentsFingerprint;
	unsigned long long _adjustmentRenderTypes;
	CPLResource* _adjustmentData;
	NSString* _creatorCode;

}

@property (nonatomic,copy) NSString * creatorCode;                                          //@synthesize creatorCode=_creatorCode - In the implementation block
@property (nonatomic,copy) NSString * adjustmentType;                                       //@synthesize adjustmentType=_adjustmentType - In the implementation block
@property (nonatomic,copy) NSString * adjustmentCompoundVersion;                            //@synthesize adjustmentCompoundVersion=_adjustmentCompoundVersion - In the implementation block
@property (nonatomic,copy) NSString * adjustmentCreatorCode;                                //@synthesize adjustmentCreatorCode=_adjustmentCreatorCode - In the implementation block
@property (assign,nonatomic) unsigned long long adjustmentSourceType;                       //@synthesize adjustmentSourceType=_adjustmentSourceType - In the implementation block
@property (nonatomic,retain) NSData * simpleAdjustmentData;                                 //@synthesize simpleAdjustmentData=_simpleAdjustmentData - In the implementation block
@property (nonatomic,copy) NSString * similarToOriginalAdjustmentsFingerprint;              //@synthesize similarToOriginalAdjustmentsFingerprint=_similarToOriginalAdjustmentsFingerprint - In the implementation block
@property (nonatomic,copy) NSString * otherAdjustmentsFingerprint;                          //@synthesize otherAdjustmentsFingerprint=_otherAdjustmentsFingerprint - In the implementation block
@property (assign,nonatomic) unsigned long long adjustmentRenderTypes;                      //@synthesize adjustmentRenderTypes=_adjustmentRenderTypes - In the implementation block
@property (nonatomic,retain) CPLResource * adjustmentData;                                  //@synthesize adjustmentData=_adjustmentData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAdjustmentCompoundVersion:(NSString *)arg1 ;
-(void)setAdjustmentCreatorCode:(NSString *)arg1 ;
-(void)setAdjustmentSourceType:(unsigned long long)arg1 ;
-(void)setSimpleAdjustmentData:(NSData *)arg1 ;
-(NSString *)otherAdjustmentsFingerprint;
-(id)adjustmentSimpleDescription;
-(void)setOtherAdjustmentsFingerprint:(NSString *)arg1 ;
-(void)setSimilarToOriginalAdjustmentsFingerprint:(NSString *)arg1 ;
-(NSString *)similarToOriginalAdjustmentsFingerprint;
-(unsigned long long)adjustmentSourceType;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAdjustmentData:(CPLResource *)arg1 ;
-(CPLResource *)adjustmentData;
-(NSData *)simpleAdjustmentData;
-(NSString *)adjustmentCreatorCode;
-(NSString *)adjustmentCompoundVersion;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)adjustmentType;
-(void)setAdjustmentRenderTypes:(unsigned long long)arg1 ;
-(unsigned long long)adjustmentRenderTypes;
-(void)setAdjustmentType:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)creatorCode;
-(void)setCreatorCode:(NSString *)arg1 ;
@end

