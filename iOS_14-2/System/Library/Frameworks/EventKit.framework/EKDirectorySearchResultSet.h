/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@class NSSet;

@interface EKDirectorySearchResultSet : NSObject {

	NSSet* _locations;
	NSSet* _groups;
	NSSet* _resources;
	NSSet* _people;

}

@property (nonatomic,retain) NSSet * locations;              //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) NSSet * groups;                 //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) NSSet * resources;              //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) NSSet * people;                 //@synthesize people=_people - In the implementation block
-(NSSet *)locations;
-(void)setLocations:(NSSet *)arg1 ;
-(void)setPeople:(NSSet *)arg1 ;
-(NSSet *)resources;
-(void)setGroups:(NSSet *)arg1 ;
-(NSSet *)groups;
-(void)setResources:(NSSet *)arg1 ;
-(NSSet *)people;
@end

