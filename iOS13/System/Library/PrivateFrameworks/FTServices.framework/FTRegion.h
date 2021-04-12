/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/


@class NSDictionary, NSArray, NSString;

@interface FTRegion : NSObject {

	NSDictionary* _dictionary;
	NSArray* _subRegions;
	FTRegion* _parentRegion;

}

@property (retain) NSDictionary * _dictionary;                //@synthesize dictionary=_dictionary - In the implementation block
@property (retain) FTRegion * _parentRegion;                  //@synthesize parentRegion=_parentRegion - In the implementation block
@property (readonly) NSString * isoCode; 
@property (readonly) NSString * label; 
@property (readonly) NSString * regionID; 
@property (readonly) NSString * basePhoneNumber; 
@property (readonly) FTRegion * parentRegion; 
@property (readonly) NSArray * subRegions;                    //@synthesize subRegions=_subRegions - In the implementation block
-(void)dealloc;
-(id)description;
-(NSDictionary *)_dictionary;
-(NSString *)label;
-(id)_initWithDictionary:(id)arg1 ;
-(NSString *)regionID;
-(void)_setParentRegion:(id)arg1 ;
-(NSArray *)subRegions;
-(NSString *)isoCode;
-(NSString *)basePhoneNumber;
-(FTRegion *)parentRegion;
-(id)regionWithID:(id)arg1 ;
-(void)set_dictionary:(NSDictionary *)arg1 ;
-(FTRegion *)_parentRegion;
-(void)set_parentRegion:(FTRegion *)arg1 ;
@end

