/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
*/


@class NSArray;

@interface TPMachineIDList : NSObject {

	NSArray* _entries;

}

@property (readonly) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
-(id)description;
-(NSArray *)entries;
-(id)initWithEntries:(id)arg1 ;
-(id)entryFor:(id)arg1 ;
-(id)machineIDsInStatus:(unsigned long long)arg1 ;
@end

