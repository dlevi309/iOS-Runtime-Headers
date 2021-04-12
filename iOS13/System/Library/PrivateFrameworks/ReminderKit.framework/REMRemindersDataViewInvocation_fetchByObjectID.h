/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface REMRemindersDataViewInvocation_fetchByObjectID : REMStoreInvocation <NSSecureCoding> {

	BOOL _showMarkedForDeleteObjects;
	NSArray* _objectIDs;

}

@property (nonatomic,readonly) NSArray * objectIDs;                        //@synthesize objectIDs=_objectIDs - In the implementation block
@property (assign,nonatomic) BOOL showMarkedForDeleteObjects;              //@synthesize showMarkedForDeleteObjects=_showMarkedForDeleteObjects - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithObjectIDs:(id)arg1 ;
-(NSArray *)objectIDs;
-(void)setShowMarkedForDeleteObjects:(BOOL)arg1 ;
-(BOOL)showMarkedForDeleteObjects;
@end

