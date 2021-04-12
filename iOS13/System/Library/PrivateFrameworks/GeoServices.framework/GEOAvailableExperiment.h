/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSString, NSMutableArray, NSArray;

@interface GEOAvailableExperiment : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSMutableArray* _branches;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * branches;                 //@synthesize branches=_branches - In the implementation block
-(id)description;
-(NSString *)name;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 ;
-(void)_addBranch:(id)arg1 ;
-(id)_branchForLabel:(id)arg1 ;
-(NSArray *)branches;
@end

