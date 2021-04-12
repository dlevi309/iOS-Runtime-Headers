/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCPersistedState.h>

@class NSDate, CKServerChangeToken, CKOperationGroup;

@interface BRCSideCarSyncPersistedState : BRCPersistedState {

	BOOL _needsSync;
	NSDate* _lastSyncDownDate;
	CKServerChangeToken* _changeToken;
	unsigned long long _requestID;
	CKOperationGroup* _ckGroup;

}

@property (readonly) NSDate * lastSyncDownDate;                                //@synthesize lastSyncDownDate=_lastSyncDownDate - In the implementation block
@property (nonatomic,readonly) CKServerChangeToken * changeToken;              //@synthesize changeToken=_changeToken - In the implementation block
@property (nonatomic,readonly) unsigned long long requestID;                   //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) BOOL needsSync;                                   //@synthesize needsSync=_needsSync - In the implementation block
@property (nonatomic,retain) CKOperationGroup * ckGroup;                       //@synthesize ckGroup=_ckGroup - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 options:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)requestID;
-(CKServerChangeToken *)changeToken;
-(BOOL)needsSync;
-(void)setNeedsSync:(BOOL)arg1 ;
-(void)updateWithServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2 ;
-(unsigned long long)allocateNextRequestID;
-(NSDate *)lastSyncDownDate;
-(void)setCkGroup:(CKOperationGroup *)arg1 ;
-(CKOperationGroup *)ckGroup;
-(void)sideCarZoneWasReset;
-(id)initWithZoneHealthState:(id)arg1 ;
@end

