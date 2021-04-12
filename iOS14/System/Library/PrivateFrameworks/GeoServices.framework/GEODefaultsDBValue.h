/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEODefaultsDBCollection, NSString;

@interface GEODefaultsDBValue : NSObject {

	GEODefaultsDBCollection* _parent;
	long long _dbId;
	NSString* _type;
	id _value;

}

@property (nonatomic,__weak,readonly) GEODefaultsDBCollection * parent;              //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) long long dbId;                                         //@synthesize dbId=_dbId - In the implementation block
@property (nonatomic,retain) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id value;                                               //@synthesize value=_value - In the implementation block
+(id)dbValue:(id)arg1 type:(id)arg2 value:(id)arg3 ;
-(GEODefaultsDBCollection *)parent;
-(id)initWithParent:(id)arg1 type:(id)arg2 value:(id)arg3 ;
-(void)setType:(NSString *)arg1 ;
-(long long)dbId;
-(void)setValue:(id)arg1 ;
-(void)setDbId:(long long)arg1 ;
-(NSString *)type;
-(id)value;
@end

