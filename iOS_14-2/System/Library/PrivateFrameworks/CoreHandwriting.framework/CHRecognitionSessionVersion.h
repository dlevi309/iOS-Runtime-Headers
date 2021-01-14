/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CHRecognitionSessionVersion : NSObject <NSSecureCoding> {

	long long _sessionVersion;
	long long _sessionResultVersion;

}

@property (nonatomic,readonly) long long sessionVersion;                    //@synthesize sessionVersion=_sessionVersion - In the implementation block
@property (nonatomic,readonly) long long sessionResultVersion;              //@synthesize sessionResultVersion=_sessionResultVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSessionVersion:(long long)arg1 sessionResultVersion:(long long)arg2 ;
-(BOOL)isValidSessionVersion;
-(BOOL)isValidSessionResultVersion;
-(long long)sessionVersion;
-(long long)sessionResultVersion;
@end

