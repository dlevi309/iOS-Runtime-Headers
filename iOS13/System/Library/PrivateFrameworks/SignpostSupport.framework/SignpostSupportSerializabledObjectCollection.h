/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/


@class NSArray, NSNumber;

@interface SignpostSupportSerializabledObjectCollection : NSObject {

	NSArray* _objectArray;
	NSNumber* _formatVersion;
	unsigned long long _machContinuousTimeFirst;
	unsigned long long _machContinuousTimeLast;

}

@property (nonatomic,readonly) NSArray * objectArray;                                   //@synthesize objectArray=_objectArray - In the implementation block
@property (nonatomic,readonly) NSNumber * formatVersion;                                //@synthesize formatVersion=_formatVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long machContinuousTimeFirst;              //@synthesize machContinuousTimeFirst=_machContinuousTimeFirst - In the implementation block
@property (nonatomic,readonly) unsigned long long machContinuousTimeLast;               //@synthesize machContinuousTimeLast=_machContinuousTimeLast - In the implementation block
+(BOOL)_versionIsSupported:(id)arg1 ;
+(id)_deserializedDictionaryForData:(id)arg1 errorOut:(id*)arg2 ;
+(BOOL)_enumerateSignpostObjectsInDeserializedCollectionDictionary:(id)arg1 processingBlock:(/*^block*/id)arg2 errorOut:(id*)arg3 ;
+(BOOL)timeRangeForSerializedCollection:(id)arg1 continuousTimeFirstOut:(unsigned long long*)arg2 continuousTimeLastOut:(unsigned long long*)arg3 errorOut:(id*)arg4 ;
+(BOOL)enumerateSignpostSupportObjectsInSerializedCollection:(id)arg1 processingBlock:(/*^block*/id)arg2 errorOut:(id*)arg3 ;
-(NSNumber *)formatVersion;
-(unsigned long long)machContinuousTimeFirst;
-(unsigned long long)machContinuousTimeLast;
-(NSArray *)objectArray;
-(id)initWithSerializeableObjectArray:(id)arg1 ;
-(id)newSerializedCollection:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 errorOut:(id*)arg2 ;
@end

