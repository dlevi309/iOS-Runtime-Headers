/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSequenceNumber:(int)arg1 ;
-(int)sequenceNumber;
-(NTKPhotoAnalysis *)analysis;
-(void)setAnalysis:(NTKPhotoAnalysis *)arg1 ;
@end

