/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCPersistedState.h>

@interface BRCClientRanksPersistedState : BRCPersistedState {

	unsigned long long _nextItemRowID;
	unsigned long long _nextNotifRank;
	unsigned long long _nextPackageItemRank;
	unsigned long long _telemetryMinRowID;
	long long _telemetryToken;

}

@property (nonatomic,readonly) unsigned long long nextItemRowID; 
@property (assign,nonatomic) unsigned long long nextNotifRank; 
@property (assign,nonatomic) unsigned long long nextPackageItemRank; 
@property (assign,nonatomic) unsigned long long telemetryMinRowID; 
@property (assign,nonatomic) long long telemetryToken; 
+(BOOL)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 options:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)allocateNotifRank;
-(unsigned long long)nextNotifRank;
-(unsigned long long)telemetryMinRowID;
-(void)setTelemetryMinRowID:(unsigned long long)arg1 ;
-(long long)telemetryToken;
-(void)setTelemetryToken:(long long)arg1 ;
-(unsigned long long)allocateItemRowID;
-(unsigned long long)nextItemRowID;
-(void)setNextNotifRank:(unsigned long long)arg1 ;
-(unsigned long long)nextPackageItemRank;
-(unsigned long long)allocatePackageItemRank;
-(void)setNextPackageItemRank:(unsigned long long)arg1 ;
@end

