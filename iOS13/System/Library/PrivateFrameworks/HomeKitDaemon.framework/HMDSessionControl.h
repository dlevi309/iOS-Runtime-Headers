/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID;

@interface HMDSessionControl : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	unsigned long long _controlCommand;
	NSUUID* _sessionID;

}

@property (nonatomic,readonly) unsigned long long controlCommand;              //@synthesize controlCommand=_controlCommand - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionID;                        //@synthesize sessionID=_sessionID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSUUID *)sessionID;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(unsigned long long)controlCommand;
-(id)initWithCommand:(unsigned long long)arg1 sessionIdentifier:(id)arg2 ;
@end
