/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <CryptoTokenKit/TKSmartCardUserInteraction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSArray, NSData;

@interface TKSmartCardUserInteractionForPINOperation : TKSmartCardUserInteraction <NSSecureCoding> {

	NSLocale* _locale;
	unsigned short _resultSW;
	unsigned long long _PINCompletion;
	NSArray* _PINMessageIndices;
	NSData* _resultData;

}

@property (assign) unsigned long long PINCompletion;              //@synthesize PINCompletion=_PINCompletion - In the implementation block
@property (retain) NSArray * PINMessageIndices;                   //@synthesize PINMessageIndices=_PINMessageIndices - In the implementation block
@property (retain) NSLocale * locale; 
@property (assign) unsigned short resultSW;                       //@synthesize resultSW=_resultSW - In the implementation block
@property (retain) NSData * resultData;                           //@synthesize resultData=_resultData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setResultData:(NSData *)arg1 ;
-(void)setResultSW:(unsigned short)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)PINCompletion;
-(void)setPINCompletion:(unsigned long long)arg1 ;
-(NSArray *)PINMessageIndices;
-(void)setPINMessageIndices:(NSArray *)arg1 ;
-(NSData *)resultData;
-(unsigned short)resultSW;
@end

