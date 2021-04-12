/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/


@class NSString, ADVector;

@interface ADDESRecordContents : NSObject {

	BOOL _addImpression;
	BOOL _addTap;
	NSString* _adamID;
	ADVector* _appVector;
	double _pTTR;
	NSString* _obfuscationID;
	NSString* _addendum;

}

@property (nonatomic,retain) NSString * adamID;                     //@synthesize adamID=_adamID - In the implementation block
@property (assign,nonatomic) BOOL addImpression;                    //@synthesize addImpression=_addImpression - In the implementation block
@property (assign,nonatomic) BOOL addTap;                           //@synthesize addTap=_addTap - In the implementation block
@property (nonatomic,retain) ADVector * appVector;                  //@synthesize appVector=_appVector - In the implementation block
@property (assign,nonatomic) double pTTR;                           //@synthesize pTTR=_pTTR - In the implementation block
@property (nonatomic,retain) NSString * obfuscationID;              //@synthesize obfuscationID=_obfuscationID - In the implementation block
@property (nonatomic,retain) NSString * addendum;                   //@synthesize addendum=_addendum - In the implementation block
-(id)init;
-(NSString *)adamID;
-(void)setAdamID:(NSString *)arg1 ;
-(void)setObfuscationID:(NSString *)arg1 ;
-(void)setAddendum:(NSString *)arg1 ;
-(NSString *)obfuscationID;
-(NSString *)addendum;
-(void)overridePTTRData;
-(void)overrideObfuscationID;
-(void)overrideAppVector:(id)arg1 vector:(id)arg2 ;
-(void)collectODMLResponse:(id)arg1 ;
-(BOOL)addImpression;
-(void)setAddImpression:(BOOL)arg1 ;
-(BOOL)addTap;
-(void)setAddTap:(BOOL)arg1 ;
-(ADVector *)appVector;
-(void)setAppVector:(ADVector *)arg1 ;
-(double)pTTR;
-(void)setPTTR:(double)arg1 ;
@end

