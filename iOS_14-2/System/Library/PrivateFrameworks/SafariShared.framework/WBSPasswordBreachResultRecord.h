/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSData, NSDate, NSDictionary;

@interface WBSPasswordBreachResultRecord : NSObject {

	NSData* _persistentIdentifier;
	unsigned long long _result;
	NSDate* _dateLastModified;

}

@property (nonatomic,readonly) NSData * persistentIdentifier;                        //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long result;                            //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSDate * dateLastModified;                            //@synthesize dateLastModified=_dateLastModified - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)dictionaryRepresentationsForResultRecords:(id)arg1 ;
+(id)resultRecordsFromDictionaryRepresentations:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithPersistentIdentifier:(id)arg1 result:(unsigned long long)arg2 dateLastModified:(id)arg3 ;
-(NSData *)persistentIdentifier;
-(id)description;
-(unsigned long long)result;
-(NSDate *)dateLastModified;
@end

