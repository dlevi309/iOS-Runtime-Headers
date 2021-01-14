/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray, NSNumber, NSString;

@interface ASDPurgeAppsRequestOptions : ASDRequestOptions {

	BOOL _offloadOnly;
	BOOL _performAvailablityCheck;
	NSArray* _apps;
	NSNumber* _desiredPurgeAmount;
	long long _urgency;
	NSString* _volume;

}

@property (nonatomic,copy) NSArray * apps;                              //@synthesize apps=_apps - In the implementation block
@property (nonatomic,copy) NSNumber * desiredPurgeAmount;               //@synthesize desiredPurgeAmount=_desiredPurgeAmount - In the implementation block
@property (assign,nonatomic) BOOL offloadOnly;                          //@synthesize offloadOnly=_offloadOnly - In the implementation block
@property (assign,nonatomic) BOOL performAvailablityCheck;              //@synthesize performAvailablityCheck=_performAvailablityCheck - In the implementation block
@property (assign,nonatomic) long long urgency;                         //@synthesize urgency=_urgency - In the implementation block
@property (nonatomic,copy) NSString * volume;                           //@synthesize volume=_volume - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setApps:(NSArray *)arg1 ;
-(void)setVolume:(NSString *)arg1 ;
-(long long)urgency;
-(NSNumber *)desiredPurgeAmount;
-(void)setDesiredPurgeAmount:(NSNumber *)arg1 ;
-(void)setOffloadOnly:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)apps;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setUrgency:(long long)arg1 ;
-(BOOL)performAvailablityCheck;
-(id)initWithVolume:(id)arg1 urgency:(long long)arg2 ;
-(void)setPerformAvailablityCheck:(BOOL)arg1 ;
-(NSString *)volume;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)offloadOnly;
@end

