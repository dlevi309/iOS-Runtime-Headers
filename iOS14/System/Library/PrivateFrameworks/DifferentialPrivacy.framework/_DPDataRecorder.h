/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <libobjc.A.dylib/_DPDataRecorder.h>

@protocol _DPDataRecorder
@required
-(void)recordNumbers:(id)arg1;
-(void)recordStrings:(id)arg1;
-(void)recordStrings:(id)arg1 metadata:(id)arg2;
-(void)recordWords:(id)arg1;
-(void)recordBitValues:(id)arg1;
-(void)recordBitValues:(id)arg1 metadata:(id)arg2;
-(void)recordBitVectors:(id)arg1 metadata:(id)arg2;

@end

#import <libobjc.A.dylib/_DPDataRecorderKeyProperties.h>

@class NSObject, NSString, _DPKeyProperties;

@interface _DPDataRecorder : NSObject <_DPDataRecorder, _DPDataRecorderKeyProperties> {

	NSObject* _randomizer;
	double _privacyParameter;
	unsigned long long _range;
	unsigned long long _fragmentWidth;
	unsigned long long _fragmentCount;
	NSString* _keyName;
	_DPKeyProperties* _keyProperties;

}

@property (nonatomic,copy,readonly) NSString * keyName;                       //@synthesize keyName=_keyName - In the implementation block
@property (nonatomic,readonly) _DPKeyProperties * keyProperties;              //@synthesize keyProperties=_keyProperties - In the implementation block
@property (nonatomic,readonly) NSObject * randomizer;                         //@synthesize randomizer=_randomizer - In the implementation block
@property (nonatomic,readonly) double privacyParameter;                       //@synthesize privacyParameter=_privacyParameter - In the implementation block
@property (nonatomic,readonly) unsigned long long range;                      //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) unsigned long long fragmentWidth;              //@synthesize fragmentWidth=_fragmentWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long fragmentCount;              //@synthesize fragmentCount=_fragmentCount - In the implementation block
-(id)init;
-(unsigned long long)range;
-(id)initWithKey:(id)arg1 ;
-(unsigned long long)fragmentCount;
-(NSString *)keyName;
-(id)description;
-(double)privacyParameter;
-(unsigned long long)fragmentWidth;
-(void)recordNumbers:(id)arg1 ;
-(void)recordStrings:(id)arg1 ;
-(void)recordStrings:(id)arg1 metadata:(id)arg2 ;
-(void)recordWords:(id)arg1 ;
-(void)recordBitValues:(id)arg1 ;
-(void)recordBitValues:(id)arg1 metadata:(id)arg2 ;
-(void)recordBitVectors:(id)arg1 metadata:(id)arg2 ;
-(NSObject *)randomizer;
-(_DPKeyProperties *)keyProperties;
@end

