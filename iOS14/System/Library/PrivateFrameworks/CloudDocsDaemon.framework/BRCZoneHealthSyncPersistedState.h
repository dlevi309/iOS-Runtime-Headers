/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)requestID;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(CKOperationGroup *)ckGroup;
-(CKServerChangeToken *)changeToken;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)updateWithServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2 ;
-(void)zoneHealthWasReset;
-(unsigned long long)allocateNextRequestID;
-(NSDate *)lastSyncDownDate;
-(BOOL)needsSyncDown;
-(void)setCkGroup:(CKOperationGroup *)arg1 ;
-(void)setNeedsSyncDown:(BOOL)arg1 ;
-(id)initWithZoneHealthState:(id)arg1 ;
@end

