/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/


@class NSString;

@interface DESPFLEncryptor : NSObject {

	NSString* _privatizationIdentifier;
	long long _version;
	/*^block*/id _privatizer;

}

@property (nonatomic,copy) id privatizer;                                   //@synthesize privatizer=_privatizer - In the implementation block
@property (nonatomic,copy) NSString * privatizationIdentifier;              //@synthesize privatizationIdentifier=_privatizationIdentifier - In the implementation block
@property (assign,nonatomic) long long version;                             //@synthesize version=_version - In the implementation block
+(void)initialize;
+(BOOL)privatizationSupported;
-(id)init;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(id)encryptedAndPrivatizedDataWithPublicKey:(id)arg1 inPlaceNumbers:(float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)_encryptedDataWithPublicKey:(id)arg1 noiseable:(id)arg2 error:(id*)arg3 ;
-(id)encryptedDataWithPublicKey:(id)arg1 inPlaceDataNumbers:(double*)arg2 count:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)encryptedDataWithPublicKey:(id)arg1 inPlaceDataFloatNumbers:(float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)encryptedDataWithPublicKey:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(id)encryptedAndPrivatizedDataWithPublicKey:(id)arg1 numbers:(const float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)encryptedDataWithPublicKey:(id)arg1 dataNumbers:(const double*)arg2 count:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)encryptedDataWithPublicKey:(id)arg1 dataFloatNumbers:(const float*)arg2 count:(unsigned long long)arg3 error:(id*)arg4 ;
-(NSString *)privatizationIdentifier;
-(void)setPrivatizationIdentifier:(NSString *)arg1 ;
-(id)privatizer;
-(void)setPrivatizer:(id)arg1 ;
@end

