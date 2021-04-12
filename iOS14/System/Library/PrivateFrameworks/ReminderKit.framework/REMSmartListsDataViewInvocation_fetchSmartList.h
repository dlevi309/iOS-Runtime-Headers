/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface REMSmartListsDataViewInvocation_fetchSmartList : REMStoreInvocation <NSSecureCoding> {

	BOOL _createIfNeeded;
	NSString* _smartListTag;
	NSArray* _reminderIDs;

}

@property (nonatomic,readonly) NSString * smartListTag;              //@synthesize smartListTag=_smartListTag - In the implementation block
@property (nonatomic,readonly) NSArray * reminderIDs;                //@synthesize reminderIDs=_reminderIDs - In the implementation block
@property (assign,nonatomic) BOOL createIfNeeded;                    //@synthesize createIfNeeded=_createIfNeeded - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)smartListTag;
-(id)initWithSmartListTag:(id)arg1 reminderIDs:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(NSArray *)reminderIDs;
-(BOOL)createIfNeeded;
-(void)setCreateIfNeeded:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

