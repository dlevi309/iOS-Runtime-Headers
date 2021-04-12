/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@interface MCNearbyKey : NSObject {

	unsigned short _character;
	float _logLikelihood;

}

@property (nonatomic,readonly) unsigned short character;              //@synthesize character=_character - In the implementation block
@property (nonatomic,readonly) float logLikelihood;                   //@synthesize logLikelihood=_logLikelihood - In the implementation block
-(float)logLikelihood;
-(unsigned short)character;
-(id)initWithCharacter:(unsigned short)arg1 logLikelihood:(float)arg2 ;
@end

