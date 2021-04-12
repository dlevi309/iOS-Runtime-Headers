/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)model;
-(NSString *)uniqueDeviceID;
-(void)setUniqueDeviceID:(NSString *)arg1 ;
-(NSString *)uniqueClientID;
-(void)setUniqueClientID:(NSString *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)intent;
-(void)setIntent:(NSString *)arg1 ;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setModelVersion:(NSString *)arg1 ;
-(NSString *)modelVersion;
-(NSString *)modelClass;
-(void)setModelClass:(NSString *)arg1 ;
@end

