/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/


@class NSString, NSNumber;

@interface CVNLPCaptionRuntimeReplacements : NSObject {

	NSString* _replacementKey;
	NSString* _replacementValue;
	double _replacementProb;
	NSNumber* _genderOption;

}

@property (nonatomic,readonly) NSString * replacementKey;                //@synthesize replacementKey=_replacementKey - In the implementation block
@property (nonatomic,readonly) NSString * replacementValue;              //@synthesize replacementValue=_replacementValue - In the implementation block
@property (nonatomic,readonly) double replacementProb;                   //@synthesize replacementProb=_replacementProb - In the implementation block
@property (nonatomic,readonly) NSNumber * genderOption;                  //@synthesize genderOption=_genderOption - In the implementation block
-(NSNumber *)genderOption;
-(NSString *)replacementKey;
-(NSString *)replacementValue;
-(double)replacementProb;
-(id)initWithKey:(id)arg1 value:(id)arg2 prob:(double)arg3 genderOption:(id)arg4 ;
@end

