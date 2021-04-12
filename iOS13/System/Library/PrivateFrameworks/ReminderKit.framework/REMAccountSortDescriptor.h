/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)ascending;
-(id)initWithType:(long long)arg1 ascending:(BOOL)arg2 ;
@end

