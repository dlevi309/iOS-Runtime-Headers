/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, NSError, NSArray;

@interface SCLSettingsSyncContext : NSObject <NSSecureCoding> {

	NSMutableArray* _recoveryHistory;
	unsigned long long _syncStatus;
	NSString* _messageIdentifier;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long syncStatus;              //@synthesize syncStatus=_syncStatus - In the implementation block
@property (nonatomic,copy) NSString * messageIdentifier;                 //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,retain) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSArray * recoveryHistory; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)syncStatus;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSyncStatus:(unsigned long long)arg1 ;
-(void)clearRecoveryHistory;
-(NSArray *)recoveryHistory;
-(void)addRecoveryHistory:(unsigned long long)arg1 ;
@end

