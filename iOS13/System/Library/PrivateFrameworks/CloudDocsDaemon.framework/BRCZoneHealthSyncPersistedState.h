/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCPersistedState.h>

@class NSDate, CKServerChangeToken, CKOperationGroup;

@interface BRCZoneHealthSyncPersistedState : BRCPersistedState {

	BOOL _needsSyncDown;
	NSDate* _lastSyncDownDate;
	CKServerChangeToken* _changeToken;
	unsigned long long _requestID;
	CKOperationGroup* _ckGroup;

}

@property (readonly) NSDate * lastSyncDownDate;                                //@synthesize lastSyncDownDate=_lastSyncDownDate - In the implementation block
@property (nonatomic,readonly) CKServerChangeToken * changeToken;              //@synthesize changeToken=_changeToken - In the implementation block
@property (nonatomic,readonly) unsigned long long requestID;                   //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL needsSyncDown;                               //@synthesize needsSyncDown=_needsSyncDown - In the implementation block
@property (nonatomic,retain) CKOperationGroup * ckGroup;                       //@synthesize ckGroup=_ckGroup - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 options:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)requestID;
-(CKServerChangeToken *)changeToken;
-(void)updateWithServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2 ;
-(void)zoneHealthWasReset;
-(unsigned long long)allocateNextRequestID;
-(NSDate *)lastSyncDownDate;
-(BOOL)needsSyncDown;
-(void)setCkGroup:(CKOperationGroup *)arg1 ;
-(void)setNeedsSyncDown:(BOOL)arg1 ;
-(CKOperationGroup *)ckGroup;
-(id)initWithZoneHealthState:(id)arg1 ;
@end

