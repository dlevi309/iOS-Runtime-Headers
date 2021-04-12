/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString, NSDate;

@interface WBSRecentWebSearchEntry : NSObject {

	NSString* _searchString;
	NSDate* _date;

}

@property (readonly) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
@property (readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)init;
-(id)initWithSearchString:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSDate *)date;
-(NSString *)searchString;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSearchString:(id)arg1 date:(id)arg2 ;
@end

