/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString, NSData, NSDate;

@interface WBSPasswordBreachCredential : NSObject {

	NSString* _password;
	NSData* _persistentIdentifier;
	NSDate* _dateLastModified;

}

@property (nonatomic,readonly) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSData * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * dateLastModified;                  //@synthesize dateLastModified=_dateLastModified - In the implementation block
-(id)initWithPassword:(id)arg1 persistentIdentifier:(id)arg2 dateLastModified:(id)arg3 ;
-(NSString *)password;
-(NSData *)persistentIdentifier;
-(id)description;
-(id)initWithSecItemDictionary:(id)arg1 ;
-(NSDate *)dateLastModified;
@end

