/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSString, NSDate, CKRecord;

@interface FCReadingListEntry : NSObject {

	NSString* _identifier;
	NSString* _articleID;
	NSDate* _dateAdded;
	unsigned long long _origin;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * articleID;               //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,readonly) NSDate * dateAdded;                      //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,readonly) unsigned long long origin;               //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) CKRecord * asCKRecord; 
-(NSString *)identifier;
-(id)dictionaryRepresentation;
-(unsigned long long)origin;
-(NSDate *)dateAdded;
-(NSString *)articleID;
-(CKRecord *)asCKRecord;
-(id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(id)initWithEntryID:(id)arg1 articleID:(id)arg2 dateAdded:(id)arg3 origin:(unsigned long long)arg4 ;
@end

