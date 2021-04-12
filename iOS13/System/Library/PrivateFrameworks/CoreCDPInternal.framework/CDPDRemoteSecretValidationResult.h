/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@class CDPDevice, NSString, NSDictionary, OTClique;

@interface CDPDRemoteSecretValidationResult : NSObject {

	BOOL _userDidCancel;
	BOOL _userDidReset;
	unsigned long long _secretType;
	CDPDevice* _device;
	NSString* _validSecret;
	NSDictionary* _recoveredInfo;
	OTClique* _recoveredClique;

}

@property (assign,nonatomic) unsigned long long secretType;              //@synthesize secretType=_secretType - In the implementation block
@property (assign,nonatomic) BOOL userDidCancel;                         //@synthesize userDidCancel=_userDidCancel - In the implementation block
@property (assign,nonatomic) BOOL userDidReset;                          //@synthesize userDidReset=_userDidReset - In the implementation block
@property (nonatomic,copy) CDPDevice * device;                           //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) NSString * validSecret;                       //@synthesize validSecret=_validSecret - In the implementation block
@property (nonatomic,copy) NSDictionary * recoveredInfo;                 //@synthesize recoveredInfo=_recoveredInfo - In the implementation block
@property (nonatomic,retain) OTClique * recoveredClique;                 //@synthesize recoveredClique=_recoveredClique - In the implementation block
-(CDPDevice *)device;
-(void)setDevice:(CDPDevice *)arg1 ;
-(BOOL)userDidCancel;
-(unsigned long long)secretType;
-(void)setRecoveredInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)recoveredInfo;
-(void)setSecretType:(unsigned long long)arg1 ;
-(void)setUserDidCancel:(BOOL)arg1 ;
-(BOOL)userDidReset;
-(void)setUserDidReset:(BOOL)arg1 ;
-(NSString *)validSecret;
-(void)setValidSecret:(NSString *)arg1 ;
-(OTClique *)recoveredClique;
-(void)setRecoveredClique:(OTClique *)arg1 ;
@end

