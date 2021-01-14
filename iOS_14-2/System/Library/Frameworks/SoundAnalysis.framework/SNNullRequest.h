/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNAnalyzerCreating.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SNRequest.h>

@class SNNullDetector, NSString;

@interface SNNullRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest> {

	SNNullDetector* _detector;
	BOOL _graphIsDeadEnded;
	BOOL _shouldThrowException;
	unsigned _blockSize;
	double _sampleRate;
	double _computationalDutyCycle;

}

@property (assign,nonatomic) double sampleRate;                          //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned blockSize;                         //@synthesize blockSize=_blockSize - In the implementation block
@property (assign,nonatomic) double computationalDutyCycle;              //@synthesize computationalDutyCycle=_computationalDutyCycle - In the implementation block
@property (assign,nonatomic) BOOL graphIsDeadEnded;                      //@synthesize graphIsDeadEnded=_graphIsDeadEnded - In the implementation block
@property (assign,nonatomic) BOOL shouldThrowException;                  //@synthesize shouldThrowException=_shouldThrowException - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(unsigned)blockSize;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSampleRate:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)sampleRate;
-(BOOL)isEqual:(id)arg1 ;
-(id)createAnalyzerWithError:(id*)arg1 ;
-(void)setBlockSize:(unsigned)arg1 ;
-(double)computationalDutyCycle;
-(void)setComputationalDutyCycle:(double)arg1 ;
-(BOOL)graphIsDeadEnded;
-(void)setGraphIsDeadEnded:(BOOL)arg1 ;
-(BOOL)shouldThrowException;
-(void)setShouldThrowException:(BOOL)arg1 ;
-(BOOL)isEqualToNullRequest:(id)arg1 ;
@end

