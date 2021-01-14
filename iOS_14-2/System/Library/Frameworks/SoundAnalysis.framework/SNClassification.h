/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SNConfidenceProvidingWritable.h>

@class NSString;

@interface SNClassification : NSObject <NSCopying, NSSecureCoding, SNConfidenceProvidingWritable> {

	NSString* _identifier;
	double _confidence;

}

@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double confidence;                     //@synthesize confidence=_confidence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(double)confidence;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToClassification:(id)arg1 ;
@end

