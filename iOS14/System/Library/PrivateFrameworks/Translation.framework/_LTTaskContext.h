/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _LTLocalePair;

@interface _LTTaskContext : NSObject <NSSecureCoding> {

	NSString* _sessionID;
	long long _taskHint;
	_LTLocalePair* _localePair;
	NSString* _deviceOS;
	NSString* _deviceType;
	NSString* _appIdentifier;

}

@property (nonatomic,copy,readonly) NSString * sessionID;                    //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) long long taskHint;                           //@synthesize taskHint=_taskHint - In the implementation block
@property (nonatomic,copy,readonly) _LTLocalePair * localePair;              //@synthesize localePair=_localePair - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceOS;                     //@synthesize deviceOS=_deviceOS - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceType;                   //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * appIdentifier;                //@synthesize appIdentifier=_appIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)deviceType;
-(NSString *)sessionID;
-(NSString *)appIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(_LTLocalePair *)localePair;
-(long long)taskHint;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceOS;
-(id)initWithSessionID:(id)arg1 taskHint:(long long)arg2 localePair:(id)arg3 deviceOS:(id)arg4 deviceType:(id)arg5 appIdentifier:(id)arg6 ;
@end

