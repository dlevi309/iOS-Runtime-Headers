/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsCore/TPSSerializableObject.h>

@class NSString;

@interface TPSCloudDeviceInfo : TPSSerializableObject {

	NSString* _model;
	NSString* _minOSVersion;
	NSString* _maxOSVersion;

}

@property (nonatomic,copy) NSString * model;                     //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * minOSVersion;              //@synthesize minOSVersion=_minOSVersion - In the implementation block
@property (nonatomic,copy) NSString * maxOSVersion;              //@synthesize maxOSVersion=_maxOSVersion - In the implementation block
-(NSString *)model;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)minOSVersion;
-(NSString *)maxOSVersion;
-(void)setMinOSVersion:(NSString *)arg1 ;
-(void)setMaxOSVersion:(NSString *)arg1 ;
@end

