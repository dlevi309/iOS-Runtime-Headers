/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


#import <CoreML/CoreML-Structs.h>
@class NSString;

@interface MLFairPlayKeyLoadingSession : NSObject {

	unsigned _sessionID;
	NSString* _keyIdentifier;
	SCD_Struct_ML58* _sessionContext;

}

@property (copy) NSString * keyIdentifier;                       //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (assign) unsigned sessionID;                           //@synthesize sessionID=_sessionID - In the implementation block
@property (assign) SCD_Struct_ML58* sessionContext;              //@synthesize sessionContext=_sessionContext - In the implementation block
-(unsigned)sessionID;
-(void)setSessionID:(unsigned)arg1 ;
-(void)setSessionContext:(SCD_Struct_ML58*)arg1 ;
-(id)init;
-(SCD_Struct_ML58*)sessionContext;
-(void)setKeyIdentifier:(NSString *)arg1 ;
-(id)transformKeyIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)generateKeyRequestForKeyIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)generatePersistentKeyBlobFromKeyResponse:(id)arg1 error:(id*)arg2 ;
-(NSString *)keyIdentifier;
-(void)dealloc;
@end

