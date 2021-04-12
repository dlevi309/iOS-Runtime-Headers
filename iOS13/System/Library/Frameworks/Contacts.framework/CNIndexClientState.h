/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CNChangeHistoryAnchor;

@interface CNIndexClientState : NSObject <NSSecureCoding> {

	BOOL _isFullSyncDone;
	long long _indexVersion;
	CNChangeHistoryAnchor* _fullSyncSnapshotAnchor;
	long long _fullSyncOffset;

}

@property (assign,nonatomic) long long indexVersion;                                      //@synthesize indexVersion=_indexVersion - In the implementation block
@property (assign,nonatomic) BOOL isFullSyncDone;                                         //@synthesize isFullSyncDone=_isFullSyncDone - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * fullSyncSnapshotAnchor;              //@synthesize fullSyncSnapshotAnchor=_fullSyncSnapshotAnchor - In the implementation block
@property (assign,nonatomic) long long fullSyncOffset;                                    //@synthesize fullSyncOffset=_fullSyncOffset - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)clientStateWithData:(id)arg1 logger:(id)arg2 ;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)data;
-(BOOL)isFullSyncDone;
-(long long)indexVersion;
-(void)setIndexVersion:(long long)arg1 ;
-(void)setIsFullSyncDone:(BOOL)arg1 ;
-(long long)fullSyncOffset;
-(CNChangeHistoryAnchor *)fullSyncSnapshotAnchor;
-(void)setFullSyncOffset:(long long)arg1 ;
-(void)setFullSyncSnapshotAnchor:(CNChangeHistoryAnchor *)arg1 ;
@end

