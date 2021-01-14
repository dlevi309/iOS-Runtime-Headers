/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@interface MCNearbyKey : NSObject {

	unsigned short _character;
	float _logLikelihood;

}

@property (nonatomic,readonly) unsigned short character;              //@synthesize character=_character - In the implementation block
@property (nonatomic,readonly) float logLikelihood;                   //@synthesize logLikelihood=_logLikelihood - In the implementation block
-(unsigned short)character;
-(float)logLikelihood;
-(id)initWithCharacter:(unsigned short)arg1 logLikelihood:(float)arg2 ;
@end

