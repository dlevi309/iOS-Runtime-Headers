/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg1 ;
-(NSDictionary *)storage;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setStorage:(NSDictionary *)arg1 ;
-(REMObjectID *)remObjectID;
-(void)setRemObjectID:(REMObjectID *)arg1 ;
-(id)initWithREMObjectID:(id)arg1 ;
@end

