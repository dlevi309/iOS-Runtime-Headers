/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, CKServerChangeToken;

@interface BRCServerChangeState : NSObject <NSSecureCoding, NSCopying> {

	NSDate* _lastSyncDownDate;
	long long _lastSyncDownStatus;
	CKServerChangeToken* _changeToken;
	unsigned long long _clientRequestID;

}

@property (retain) NSDate * lastSyncDownDate;                                 //@synthesize lastSyncDownDate=_lastSyncDownDate - In the implementation block
@property (assign,nonatomic) long long lastSyncDownStatus;                    //@synthesize lastSyncDownStatus=_lastSyncDownStatus - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * changeToken;               //@synthesize changeToken=_changeToken - In the implementation block
@property (assign,nonatomic) unsigned long long clientRequestID;              //@synthesize clientRequestID=_clientRequestID - In the implementation block
@property (nonatomic,readonly) BOOL hasNeverSyncedDown; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(CKServerChangeToken *)changeToken;
-(void)setChangeToken:(CKServerChangeToken *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setClientRequestID:(unsigned long long)arg1 ;
-(unsigned long long)clientRequestID;
-(id)descriptionWithContext:(id)arg1 ;
-(BOOL)updateWithServerChangeToken:(id)arg1 clientRequestID:(unsigned long long)arg2 syncDownStatus:(long long)arg3 ;
-(NSDate *)lastSyncDownDate;
-(long long)lastSyncDownStatus;
-(void)setLastSyncDownDate:(NSDate *)arg1 ;
-(void)setLastSyncDownStatus:(long long)arg1 ;
-(void)forgetChangeTokens;
-(void)forgetClientRequestID;
-(BOOL)hasNeverSyncedDown;
-(id)initWithServerSyncState:(id)arg1 ;
@end

