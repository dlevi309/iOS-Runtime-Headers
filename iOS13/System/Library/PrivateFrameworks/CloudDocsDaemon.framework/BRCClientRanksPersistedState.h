/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCPersistedState.h>

@interface BRCClientRanksPersistedState : BRCPersistedState {

	unsigned long long _nextItemRowID;
	unsigned long long _nextNotifRank;
	unsigned long long _nextPackageItemRank;

}

@property (nonatomic,readonly) unsigned long long nextItemRowID; 
@property (assign,nonatomic) unsigned long long nextNotifRank; 
@property (assign,nonatomic) unsigned long long nextPackageItemRank; 
+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 options:(id)arg2 ;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)nextNotifRank;
-(unsigned long long)allocateNotifRank;
-(unsigned long long)allocateItemRowID;
-(unsigned long long)nextItemRowID;
-(void)setNextNotifRank:(unsigned long long)arg1 ;
-(unsigned long long)nextPackageItemRank;
-(unsigned long long)allocatePackageItemRank;
-(void)setNextPackageItemRank:(unsigned long long)arg1 ;
@end

