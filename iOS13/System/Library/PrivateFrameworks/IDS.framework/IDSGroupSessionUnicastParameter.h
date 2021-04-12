/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface IDSGroupSessionUnicastParameter : NSObject <NSSecureCoding> {

	NSString* _groupSessionID;
	unsigned long long _participantID;
	unsigned long long _connectionIndex;
	long long _dataMode;

}

@property (nonatomic,readonly) NSString * groupSessionID;                       //@synthesize groupSessionID=_groupSessionID - In the implementation block
@property (nonatomic,readonly) unsigned long long participantID;                //@synthesize participantID=_participantID - In the implementation block
@property (nonatomic,readonly) unsigned long long connectionIndex;              //@synthesize connectionIndex=_connectionIndex - In the implementation block
@property (nonatomic,readonly) long long dataMode;                              //@synthesize dataMode=_dataMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)participantID;
-(long long)dataMode;
-(id)initWithGroupSessionID:(id)arg1 participantID:(unsigned long long)arg2 dataMode:(long long)arg3 connectionIndex:(unsigned long long)arg4 ;
-(NSString *)groupSessionID;
-(unsigned long long)connectionIndex;
@end

