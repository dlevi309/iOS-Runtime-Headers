/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


@interface ALSCGreenClient : NSObject {

	BOOL _cachingAllowed;
	BOOL _key1Value;
	BOOL _key2Value;
	BOOL _key3Value;

}

@property (assign,nonatomic) BOOL key1Value;                      //@synthesize key1Value=_key1Value - In the implementation block
@property (assign,nonatomic) BOOL key2Value;                      //@synthesize key2Value=_key2Value - In the implementation block
@property (assign,nonatomic) BOOL key3Value;                      //@synthesize key3Value=_key3Value - In the implementation block
@property (nonatomic,readonly) BOOL valuesFinalized; 
-(id)init;
-(BOOL)valuesFinalized;
-(void)setKey1Value:(BOOL)arg1 ;
-(void)setKey2Value:(BOOL)arg1 ;
-(BOOL)_readGreenKeysFromDictionary:(id)arg1 ;
-(void)setKey3Value:(BOOL)arg1 ;
-(BOOL)key3Value;
-(BOOL)key1Value;
-(BOOL)key2Value;
-(BOOL)_attemptReadingValuesFromDiskAndUpdateFileState;
@end

