/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(id)init;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)lastSyncDate;
-(id)initWithCoder:(id)arg1 ;
-(CKOperationGroup *)ckGroup;
-(CKServerChangeToken *)serverChangeToken;
-(BOOL)needsContainerMetadataSyncDown;
-(BOOL)needsSharedDBSyncDown;
-(void)setNeedsContainerMetadataSyncDown:(BOOL)arg1 ;
-(void)setCkGroup:(CKOperationGroup *)arg1 ;
-(void)setNeedsSharedDBSyncDown:(BOOL)arg1 ;
@end

