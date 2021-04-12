/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <libobjc.A.dylib/_DPDataRecorder.h>

@protocol _DPDataRecorder
@required
-(void)recordNumbers:(id)arg1;
-(void)recordStrings:(id)arg1;
-(void)recordWords:(id)arg1;
-(void)recordBitValues:(id)arg1;

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
-(id)description;
-(id)initWithKey:(id)arg1 ;
-(unsigned long long)range;
-(unsigned long long)fragmentCount;
-(NSString *)keyName;
-(double)privacyParameter;
-(unsigned long long)fragmentWidth;
-(void)recordNumbers:(id)arg1 ;
-(void)recordStrings:(id)arg1 ;
-(void)recordWords:(id)arg1 ;
-(void)recordBitValues:(id)arg1 ;
-(NSObject *)randomizer;
-(_DPKeyProperties *)keyProperties;
@end

