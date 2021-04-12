/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)name;
-(id)description;
-(NSArray *)branches;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 ;
-(void)_addBranch:(id)arg1 ;
-(id)_branchForLabel:(id)arg1 ;
@end

