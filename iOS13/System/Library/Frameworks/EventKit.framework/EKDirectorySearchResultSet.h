/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSSet *)people;
-(NSSet *)groups;
-(void)setLocations:(NSSet *)arg1 ;
-(NSSet *)resources;
-(void)setResources:(NSSet *)arg1 ;
-(NSSet *)locations;
-(void)setGroups:(NSSet *)arg1 ;
-(void)setPeople:(NSSet *)arg1 ;
@end

