/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@protocol HFCharacteristicOperationContextProviding;
@class NSError, HMSymptom;

@interface HFCharacteristicValueDisplayError : NSObject {

	unsigned long long _category;
	id<HFCharacteristicOperationContextProviding> _contextProvider;
	NSError* _underlyingError;
	HMSymptom* _underlyingSymptom;

}

@property (assign,nonatomic) unsigned long long category;                                                //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicOperationContextProviding> contextProvider;              //@synthesize contextProvider=_contextProvider - In the implementation block
@property (nonatomic,copy) NSError * underlyingError;                                                    //@synthesize underlyingError=_underlyingError - In the implementation block
@property (nonatomic,retain) HMSymptom * underlyingSymptom;                                              //@synthesize underlyingSymptom=_underlyingSymptom - In the implementation block
@property (getter=isPersistentError,nonatomic,readonly) BOOL persistentError; 
+(id)errorWithUnderlyingError:(id)arg1 readTraits:(id)arg2 contextProvider:(id)arg3 ;
+(id)errorWithUnderlyingSymptom:(id)arg1 isFixingCurrently:(BOOL)arg2 contextProvider:(id)arg3 ;
+(id)mostEgregiousError:(id)arg1 ;
-(unsigned long long)category;
-(void)setCategory:(unsigned long long)arg1 ;
-(void)setUnderlyingError:(NSError *)arg1 ;
-(NSError *)underlyingError;
-(id<HFCharacteristicOperationContextProviding>)contextProvider;
-(void)setContextProvider:(id<HFCharacteristicOperationContextProviding>)arg1 ;
-(void)setUnderlyingSymptom:(HMSymptom *)arg1 ;
-(HMSymptom *)underlyingSymptom;
-(BOOL)isPersistentError;
@end

