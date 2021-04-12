/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCPersistedState.h>

@class CKServerChangeToken, NSDate, CKOperationGroup;

@interface BRCContainerMetadataSyncPersistedState : BRCPersistedState {

	BOOL _needsContainerMetadataSyncDown;
	BOOL _needsSharedDBSyncDown;
	CKServerChangeToken* _serverChangeToken;
	NSDate* _lastSyncDate;
	CKOperationGroup* _ckGroup;

}

@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (retain) NSDate * lastSyncDate;                                          //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (assign,nonatomic) BOOL needsContainerMetadataSyncDown;                  //@synthesize needsContainerMetadataSyncDown=_needsContainerMetadataSyncDown - In the implementation block
@property (assign,nonatomic) BOOL needsSharedDBSyncDown;                           //@synthesize needsSharedDBSyncDown=_needsSharedDBSyncDown - In the implementation block
@property (nonatomic,retain) CKOperationGroup * ckGroup;                           //@synthesize ckGroup=_ckGroup - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 options:(id)arg2 ;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)lastSyncDate;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(BOOL)needsContainerMetadataSyncDown;
-(BOOL)needsSharedDBSyncDown;
-(void)setNeedsContainerMetadataSyncDown:(BOOL)arg1 ;
-(void)setCkGroup:(CKOperationGroup *)arg1 ;
-(void)setNeedsSharedDBSyncDown:(BOOL)arg1 ;
-(CKOperationGroup *)ckGroup;
@end

