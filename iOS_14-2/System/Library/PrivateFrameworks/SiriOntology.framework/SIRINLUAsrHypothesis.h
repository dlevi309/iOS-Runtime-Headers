/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface SIRINLUAsrHypothesis : NSObject <NSSecureCoding> {

	NSString* _utterance;
	double _probability;
	NSUUID* _uuid;

}

@property (nonatomic,retain) NSString * utterance;              //@synthesize utterance=_utterance - In the implementation block
@property (assign,nonatomic) double probability;                //@synthesize probability=_probability - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                     //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)uuid;
-(double)probability;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setProbability:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)initWithUtterance:(id)arg1 probability:(double)arg2 uuid:(id)arg3 ;
@end

