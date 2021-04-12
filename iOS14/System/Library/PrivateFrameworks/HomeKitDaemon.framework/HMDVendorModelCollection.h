/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableSet *)entries;
-(void)addEntry:(id)arg1 ;
-(id)attributeDescriptions;
-(BOOL)isEqual:(id)arg1 ;
-(HMDVendorModelEntry *)defaultEntry;
-(id)lookupModel:(id)arg1 ;
-(id)lookupProductData:(id)arg1 ;
-(void)setDefaultEntry:(HMDVendorModelEntry *)arg1 ;
@end

