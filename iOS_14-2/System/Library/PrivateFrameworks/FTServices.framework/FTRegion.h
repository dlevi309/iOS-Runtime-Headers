/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)_dictionary;
-(id)description;
-(NSString *)isoCode;
-(NSString *)regionID;
-(id)_initWithDictionary:(id)arg1 ;
-(NSArray *)subRegions;
-(void)_setParentRegion:(id)arg1 ;
-(NSString *)basePhoneNumber;
-(id)regionWithID:(id)arg1 ;
-(void)set_dictionary:(NSDictionary *)arg1 ;
-(void)set_parentRegion:(FTRegion *)arg1 ;
-(FTRegion *)parentRegion;
-(NSString *)label;
-(FTRegion *)_parentRegion;
-(void)dealloc;
@end

