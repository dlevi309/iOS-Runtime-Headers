/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKAPSMachServiceConnectionKey : NSObject <NSCopying> {

	NSString* _environmentName;
	NSString* _namedDelegatePort;

}

@property (nonatomic,copy) NSString * environmentName;                //@synthesize environmentName=_environmentName - In the implementation block
@property (nonatomic,copy) NSString * namedDelegatePort;              //@synthesize namedDelegatePort=_namedDelegatePort - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 ;
-(NSString *)environmentName;
-(NSString *)namedDelegatePort;
-(void)setEnvironmentName:(NSString *)arg1 ;
-(void)setNamedDelegatePort:(NSString *)arg1 ;
@end

