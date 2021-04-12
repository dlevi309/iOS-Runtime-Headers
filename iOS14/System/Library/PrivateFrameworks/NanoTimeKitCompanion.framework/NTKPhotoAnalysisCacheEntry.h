/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NTKPhotoAnalysis;

@interface NTKPhotoAnalysisCacheEntry : NSObject <NSSecureCoding> {

	NTKPhotoAnalysis* _analysis;
	int _sequenceNumber;

}

@property (nonatomic,retain) NTKPhotoAnalysis * analysis;              //@synthesize analysis=_analysis - In the implementation block
@property (assign,nonatomic) int sequenceNumber;                       //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSequenceNumber:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)sequenceNumber;
-(id)initWithCoder:(id)arg1 ;
-(NTKPhotoAnalysis *)analysis;
-(void)setAnalysis:(NTKPhotoAnalysis *)arg1 ;
@end

