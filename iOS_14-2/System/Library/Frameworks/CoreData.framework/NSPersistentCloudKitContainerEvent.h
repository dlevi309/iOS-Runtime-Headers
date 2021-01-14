/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSManagedObjectID, NSUUID, NSString, NSDate, NSError;

@interface NSPersistentCloudKitContainerEvent : NSObject <NSCopying> {

	BOOL _succeeded;
	NSManagedObjectID* _ckEventObjectID;
	NSUUID* _identifier;
	NSString* _storeIdentifier;
	long long _type;
	NSDate* _startDate;
	NSDate* _endDate;
	NSError* _error;

}

@property (nonatomic,readonly) NSManagedObjectID * ckEventObjectID;              //@synthesize ckEventObjectID=_ckEventObjectID - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * storeIdentifier;                       //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BOOL succeeded;                                   //@synthesize succeeded=_succeeded - In the implementation block
@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
+(id)eventTypeString:(long long)arg1 ;
-(NSDate *)endDate;
-(BOOL)succeeded;
-(NSDate *)startDate;
-(id)initWithCKEvent:(id)arg1 ;
-(NSError *)error;
-(id)description;
-(long long)type;
-(NSManagedObjectID *)ckEventObjectID;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)storeIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

