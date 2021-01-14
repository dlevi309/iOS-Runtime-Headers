/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKAPSMachServiceConnectionKey : NSObject <NSCopying> {

	NSString* _environmentName;
	NSString* _namedDelegatePort;

}

@property (nonatomic,copy,readonly) NSString * environmentName;                //@synthesize environmentName=_environmentName - In the implementation block
@property (nonatomic,copy,readonly) NSString * namedDelegatePort;              //@synthesize namedDelegatePort=_namedDelegatePort - In the implementation block
-(NSString *)namedDelegatePort;
-(unsigned long long)hash;
-(id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 ;
-(NSString *)environmentName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

