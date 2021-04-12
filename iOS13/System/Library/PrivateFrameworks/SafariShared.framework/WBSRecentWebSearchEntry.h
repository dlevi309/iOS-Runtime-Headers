/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString, NSDate;

@interface WBSRecentWebSearchEntry : NSObject {

	NSString* _searchString;
	NSDate* _date;

}

@property (readonly) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
@property (readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)date;
-(id)dictionaryRepresentation;
-(id)initWithSearchString:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)searchString;
-(id)initWithSearchString:(id)arg1 date:(id)arg2 ;
@end

