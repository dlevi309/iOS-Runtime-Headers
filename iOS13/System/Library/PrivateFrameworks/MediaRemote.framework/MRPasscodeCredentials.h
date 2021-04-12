/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSString;

@interface MRPasscodeCredentials : NSObject {

	unsigned _type;
	unsigned long long _characterCount;
	NSString* _passcode;

}

@property (assign,nonatomic) unsigned type;                                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long characterCount;              //@synthesize characterCount=_characterCount - In the implementation block
@property (nonatomic,copy) NSString * passcode;                              //@synthesize passcode=_passcode - In the implementation block
+(id)standardCredentials;
+(id)_randomPasscode;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(unsigned long long)characterCount;
-(NSString *)passcode;
-(void)setCharacterCount:(unsigned long long)arg1 ;
-(void)setPasscode:(NSString *)arg1 ;
@end

