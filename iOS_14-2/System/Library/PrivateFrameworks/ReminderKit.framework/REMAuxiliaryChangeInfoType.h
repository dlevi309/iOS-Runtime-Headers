/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/REMAuxiliaryChangeInfoObject.h>

@class NSDictionary, REMObjectID, NSString;

@interface REMAuxiliaryChangeInfoType : NSObject <REMAuxiliaryChangeInfoObject> {

	REMObjectID* remObjectID;
	NSDictionary* _storage;

}

@property (nonatomic,retain) REMObjectID * remObjectID; 
@property (nonatomic,retain) NSDictionary * storage;                 //@synthesize storage=_storage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)cdEntityName;
+(id)newObjectID;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setStorage:(NSDictionary *)arg1 ;
-(REMObjectID *)remObjectID;
-(NSDictionary *)storage;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setRemObjectID:(REMObjectID *)arg1 ;
-(id)initWithREMObjectID:(id)arg1 ;
@end

