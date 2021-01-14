/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/WebInspector-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RWIDriverConfiguration : NSObject <NSCopying> {

	NSString* _driverIdentifier;
	NSString* _driverName;
	NSString* _driverVersion;
	NSString* _driverHost;
	long long _driverPort;

}

@property (nonatomic,copy) NSString * driverIdentifier;              //@synthesize driverIdentifier=_driverIdentifier - In the implementation block
@property (nonatomic,copy) NSString * driverName;                    //@synthesize driverName=_driverName - In the implementation block
@property (nonatomic,copy) NSString * driverVersion;                 //@synthesize driverVersion=_driverVersion - In the implementation block
@property (nonatomic,copy) NSString * driverHost;                    //@synthesize driverHost=_driverHost - In the implementation block
@property (assign,nonatomic) long long driverPort;                   //@synthesize driverPort=_driverPort - In the implementation block
+(BOOL)isValidPayload:(id)arg1 ;
+(id)decodeFromPayload:(id)arg1 ;
-(id)init;
-(NSString *)driverName;
-(NSString *)driverVersion;
-(void)setDriverVersion:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDriverName:(NSString *)arg1 ;
-(NSString *)driverIdentifier;
-(void)setDriverIdentifier:(NSString *)arg1 ;
-(void)encodeToPayload:(id)arg1 ;
-(NSString *)driverHost;
-(void)setDriverHost:(NSString *)arg1 ;
-(long long)driverPort;
-(void)setDriverPort:(long long)arg1 ;
@end

