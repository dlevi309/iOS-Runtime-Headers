/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)entityType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeID;
-(id)initWithEntityType:(int)arg1 changeID:(long long)arg2 ;
@end

