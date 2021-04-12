/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSMutableArray;

@interface CMDataContainer : NSObject <NSSecureCoding> {

	unsigned long long nextDataSent;
	unsigned long long nextDataRecv;
	unsigned long long nextMsgSent;
	unsigned long long nextMsgRecv;
	unsigned long long nextEvent;
	NSString* _version;
	NSString* _cv3dVersion;
	NSString* _iOSVersion;
	NSString* _macOSVersion;
	NSString* _cvPlayerVersion;
	NSString* _deviceString;
	NSNumber* _sessionID;
	NSMutableArray* _cmDataSent;
	NSMutableArray* _cmDataRecv;
	NSMutableArray* _cmMsgSent;
	NSMutableArray* _cmMsgRecv;
	NSMutableArray* _cmEvents;

}

@property (retain) NSString * version;                       //@synthesize version=_version - In the implementation block
@property (retain) NSString * cv3dVersion;                   //@synthesize cv3dVersion=_cv3dVersion - In the implementation block
@property (retain) NSString * iOSVersion;                    //@synthesize iOSVersion=_iOSVersion - In the implementation block
@property (retain) NSString * macOSVersion;                  //@synthesize macOSVersion=_macOSVersion - In the implementation block
@property (retain) NSString * cvPlayerVersion;               //@synthesize cvPlayerVersion=_cvPlayerVersion - In the implementation block
@property (retain) NSString * deviceString;                  //@synthesize deviceString=_deviceString - In the implementation block
@property (retain) NSNumber * sessionID;                     //@synthesize sessionID=_sessionID - In the implementation block
@property (retain) NSMutableArray * cmDataSent;              //@synthesize cmDataSent=_cmDataSent - In the implementation block
@property (retain) NSMutableArray * cmDataRecv;              //@synthesize cmDataRecv=_cmDataRecv - In the implementation block
@property (retain) NSMutableArray * cmMsgSent;               //@synthesize cmMsgSent=_cmMsgSent - In the implementation block
@property (retain) NSMutableArray * cmMsgRecv;               //@synthesize cmMsgRecv=_cmMsgRecv - In the implementation block
@property (retain) NSMutableArray * cmEvents;                //@synthesize cmEvents=_cmEvents - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classes;
+(id)versionS;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(NSNumber *)sessionID;
-(void)setSessionID:(NSNumber *)arg1 ;
-(void)setDeviceString:(NSString *)arg1 ;
-(void)resetReader;
-(id)grabNextDataRecv;
-(id)grabNextDataSent;
-(id)grabNextMessageRecv;
-(id)grabNextMessageSent;
-(id)grabNextEvent;
-(NSString *)cv3dVersion;
-(NSString *)iOSVersion;
-(NSString *)macOSVersion;
-(NSString *)cvPlayerVersion;
-(NSString *)deviceString;
-(void)setIOSVersion:(NSString *)arg1 ;
-(void)appendCMData:(id)arg1 sending:(BOOL)arg2 ;
-(void)setCv3dVersion:(NSString *)arg1 ;
-(void)setCvPlayerVersion:(NSString *)arg1 ;
-(void)setCmDataSent:(NSMutableArray *)arg1 ;
-(void)setCmDataRecv:(NSMutableArray *)arg1 ;
-(void)setCmMsgSent:(NSMutableArray *)arg1 ;
-(void)setCmMsgRecv:(NSMutableArray *)arg1 ;
-(void)setCmEvents:(NSMutableArray *)arg1 ;
-(void)setMacOSVersion:(NSString *)arg1 ;
-(NSMutableArray *)cmDataSent;
-(NSMutableArray *)cmDataRecv;
-(NSMutableArray *)cmMsgSent;
-(NSMutableArray *)cmMsgRecv;
-(NSMutableArray *)cmEvents;
-(void)appendCMMessage:(id)arg1 sending:(BOOL)arg2 ;
-(void)appendCMEvent:(id)arg1 ;
@end

