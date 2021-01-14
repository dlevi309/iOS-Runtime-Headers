/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/


@class NSArray;

@interface TPMachineIDList : NSObject {

	NSArray* _entries;

}

@property (readonly) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
-(id)initWithEntries:(id)arg1 ;
-(NSArray *)entries;
-(id)description;
-(id)entryFor:(id)arg1 ;
-(id)machineIDsInStatus:(unsigned long long)arg1 ;
@end

