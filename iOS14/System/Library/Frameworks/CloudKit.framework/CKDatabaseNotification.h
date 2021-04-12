/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKNotification.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKDatabaseNotification : CKNotification <NSSecureCoding> {

	long long _databaseScope;

}

@property (assign,nonatomic) long long databaseScope;              //@synthesize databaseScope=_databaseScope - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDatabaseScope:(long long)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(long long)databaseScope;
@end

