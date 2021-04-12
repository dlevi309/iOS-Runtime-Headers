/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CADObjectChangeID : NSObject <NSSecureCoding> {

	int _entityType;
	long long _changeID;

}

@property (nonatomic,readonly) int entityType;                  //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) long long changeID;              //@synthesize changeID=_changeID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeID;
-(int)entityType;
-(id)initWithEntityType:(int)arg1 changeID:(long long)arg2 ;
@end

