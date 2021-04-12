/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDVendorModelEntry, NSMutableSet;

@interface HMDVendorModelCollection : HMFObject {

	HMDVendorModelEntry* _defaultEntry;
	NSMutableSet* _entries;

}

@property (nonatomic,readonly) NSMutableSet * entries;                        //@synthesize entries=_entries - In the implementation block
@property (nonatomic,retain) HMDVendorModelEntry * defaultEntry;              //@synthesize defaultEntry=_defaultEntry - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)addEntry:(id)arg1 ;
-(NSMutableSet *)entries;
-(id)attributeDescriptions;
-(HMDVendorModelEntry *)defaultEntry;
-(id)lookupModel:(id)arg1 ;
-(id)lookupProductData:(id)arg1 ;
-(void)setDefaultEntry:(HMDVendorModelEntry *)arg1 ;
@end

