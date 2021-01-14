/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface REMAccountSortDescriptor : NSObject <NSSecureCoding> {

	BOOL _ascending;
	long long _type;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL ascending;              //@synthesize ascending=_ascending - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)ascending;
-(long long)type;
-(id)initWithType:(long long)arg1 ascending:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end

