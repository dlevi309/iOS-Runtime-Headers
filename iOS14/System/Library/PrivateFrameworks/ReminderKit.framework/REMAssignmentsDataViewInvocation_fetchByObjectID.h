/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface REMAssignmentsDataViewInvocation_fetchByObjectID : REMStoreInvocation <NSSecureCoding> {

	BOOL _showLazyDeleteObjects;
	NSArray* _objectIDs;

}

@property (nonatomic,readonly) NSArray * objectIDs;                   //@synthesize objectIDs=_objectIDs - In the implementation block
@property (assign,nonatomic) BOOL showLazyDeleteObjects;              //@synthesize showLazyDeleteObjects=_showLazyDeleteObjects - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)objectIDs;
-(BOOL)showLazyDeleteObjects;
-(id)initWithObjectIDs:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setShowLazyDeleteObjects:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

