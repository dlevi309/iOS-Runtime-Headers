/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDaemonCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface IMDiMessageIDSTrustedData : NSObject <NSCopying> {

	NSString* _fromPushID;
	NSData* _fromToken;
	NSString* _fromIdentifier;
	NSString* _toIdentifier;
	long long _command;

}

@property (nonatomic,readonly) NSString * fromPushID;                  //@synthesize fromPushID=_fromPushID - In the implementation block
@property (nonatomic,readonly) NSData * fromToken;                     //@synthesize fromToken=_fromToken - In the implementation block
@property (nonatomic,readonly) NSString * fromIdentifier;              //@synthesize fromIdentifier=_fromIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * toIdentifier;                //@synthesize toIdentifier=_toIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) long long command;                      //@synthesize command=_command - In the implementation block
-(id)description;
-(NSString *)fromIdentifier;
-(BOOL)isFromMe;
-(long long)command;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)fromToken;
-(NSString *)fromPushID;
-(NSString *)toIdentifier;
-(id)initWithTopLevelMessage:(id)arg1 fromPushID:(id)arg2 ;
@end

