/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/


@class NSDictionary;

@interface FPFootprintSharingData : NSObject {

	NSDictionary* _processToProcessGroups;
	NSDictionary* _processGroupToObjects;

}

@property (nonatomic,retain) NSDictionary * processToProcessGroups;              //@synthesize processToProcessGroups=_processToProcessGroups - In the implementation block
@property (nonatomic,retain) NSDictionary * processGroupToObjects;               //@synthesize processGroupToObjects=_processGroupToObjects - In the implementation block
-(NSDictionary *)processToProcessGroups;
-(NSDictionary *)processGroupToObjects;
-(void)setProcessToProcessGroups:(NSDictionary *)arg1 ;
-(void)setProcessGroupToObjects:(NSDictionary *)arg1 ;
@end

