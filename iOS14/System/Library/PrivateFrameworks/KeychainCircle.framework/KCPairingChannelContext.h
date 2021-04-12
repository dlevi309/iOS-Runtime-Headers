/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface KCPairingChannelContext : NSObject <NSSecureCoding> {

	NSString* _model;
	NSString* _modelVersion;
	NSString* _modelClass;
	NSString* _osVersion;
	NSString* _uniqueDeviceID;
	NSString* _uniqueClientID;
	NSString* _intent;

}

@property (retain) NSString * model;                       //@synthesize model=_model - In the implementation block
@property (retain) NSString * modelVersion;                //@synthesize modelVersion=_modelVersion - In the implementation block
@property (retain) NSString * modelClass;                  //@synthesize modelClass=_modelClass - In the implementation block
@property (retain) NSString * osVersion;                   //@synthesize osVersion=_osVersion - In the implementation block
@property (retain) NSString * uniqueDeviceID;              //@synthesize uniqueDeviceID=_uniqueDeviceID - In the implementation block
@property (retain) NSString * uniqueClientID;              //@synthesize uniqueClientID=_uniqueClientID - In the implementation block
@property (retain) NSString * intent;                      //@synthesize intent=_intent - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)intent;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)model;
-(NSString *)modelVersion;
-(void)setModelVersion:(NSString *)arg1 ;
-(NSString *)uniqueDeviceID;
-(void)setUniqueDeviceID:(NSString *)arg1 ;
-(NSString *)uniqueClientID;
-(void)setUniqueClientID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)osVersion;
-(void)setIntent:(NSString *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)setModelClass:(NSString *)arg1 ;
-(NSString *)modelClass;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

