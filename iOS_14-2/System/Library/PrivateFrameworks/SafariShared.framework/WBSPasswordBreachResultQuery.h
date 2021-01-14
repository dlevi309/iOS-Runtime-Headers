/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSData, NSDate, NSDictionary;

@interface WBSPasswordBreachResultQuery : NSObject {

	NSData* _persistentIdentifier;
	NSDate* _dateLastModified;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * persistentIdentifier;                        //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * dateLastModified;                            //@synthesize dateLastModified=_dateLastModified - In the implementation block
+(id)dictionaryRepresentationsForResultQueries:(id)arg1 ;
+(id)resultQueriesFromDictionaryRepresentations:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithPersistentIdentifier:(id)arg1 dateLastModified:(id)arg2 ;
-(NSData *)persistentIdentifier;
-(id)description;
-(NSDate *)dateLastModified;
@end

