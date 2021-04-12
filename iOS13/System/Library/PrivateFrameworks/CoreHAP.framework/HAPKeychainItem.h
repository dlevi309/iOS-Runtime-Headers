/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber, NSData, NSDate;

@interface HAPKeychainItem : HMFObject {

	BOOL _syncable;
	BOOL _invisible;
	NSString* _accessGroup;
	NSNumber* _type;
	NSString* _label;
	NSString* _itemDescription;
	NSString* _account;
	NSData* _valueData;
	void* _platformReference;
	NSData* _genericData;
	NSString* _viewHint;
	NSDate* _creationDate;

}

@property (nonatomic,retain) NSString * accessGroup;                           //@synthesize accessGroup=_accessGroup - In the implementation block
@property (nonatomic,retain) NSNumber * type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * itemDescription;                       //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,retain) NSString * account;                               //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSData * valueData;                               //@synthesize valueData=_valueData - In the implementation block
@property (assign,getter=isSyncable,nonatomic) BOOL syncable;                  //@synthesize syncable=_syncable - In the implementation block
@property (getter=isInvisible,nonatomic,readonly) BOOL invisible;              //@synthesize invisible=_invisible - In the implementation block
@property (assign,nonatomic) void* platformReference;                          //@synthesize platformReference=_platformReference - In the implementation block
@property (nonatomic,retain) NSData * genericData;                             //@synthesize genericData=_genericData - In the implementation block
@property (nonatomic,retain) NSString * viewHint;                              //@synthesize viewHint=_viewHint - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                            //@synthesize creationDate=_creationDate - In the implementation block
-(void)dealloc;
-(id)description;
-(NSNumber *)type;
-(void)setType:(NSNumber *)arg1 ;
-(NSDate *)creationDate;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSData *)valueData;
-(BOOL)isInvisible;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(NSString *)viewHint;
-(void)setViewHint:(NSString *)arg1 ;
-(BOOL)isSyncable;
-(NSString *)itemDescription;
-(void)setItemDescription:(NSString *)arg1 ;
-(id)initWithQueryResult:(CFDictionaryRef)arg1 shouldIncludeData:(BOOL)arg2 ;
-(void)setValueData:(NSData *)arg1 ;
-(void)setSyncable:(BOOL)arg1 ;
-(void*)platformReference;
-(void)setPlatformReference:(void*)arg1 ;
-(NSData *)genericData;
-(void)setGenericData:(NSData *)arg1 ;
@end

