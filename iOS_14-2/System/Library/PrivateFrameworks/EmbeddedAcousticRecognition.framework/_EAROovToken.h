/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/


@class NSString, NSSet;

@interface _EAROovToken : NSObject {

	int _frequency;
	NSString* _orthography;
	NSSet* _prons;

}

@property (nonatomic,readonly) NSString * orthography;              //@synthesize orthography=_orthography - In the implementation block
@property (nonatomic,readonly) NSSet * prons;                       //@synthesize prons=_prons - In the implementation block
@property (nonatomic,readonly) int frequency;                       //@synthesize frequency=_frequency - In the implementation block
-(int)frequency;
-(NSSet *)prons;
-(NSString *)orthography;
-(id)initWithOrthography:(id)arg1 prons:(id)arg2 frequency:(int)arg3 ;
@end

