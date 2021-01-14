/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString;

@interface CUMobileDevice : NSObject <NSCopying> {

	BOOL _connected;
	BOOL _paired;
	BOOL _placeholder;
	NSUUID* _identifier;
	NSString* _internalModel;
	NSString* _name;
	NSString* _udid;
	NSString* _wifiAddress;

}

@property (assign,nonatomic) BOOL connected;                      //@synthesize connected=_connected - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * internalModel;              //@synthesize internalModel=_internalModel - In the implementation block
@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL paired;                         //@synthesize paired=_paired - In the implementation block
@property (assign,nonatomic) BOOL placeholder;                    //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy) NSString * udid;                       //@synthesize udid=_udid - In the implementation block
@property (nonatomic,copy) NSString * wifiAddress;                //@synthesize wifiAddress=_wifiAddress - In the implementation block
-(BOOL)connected;
-(void)setConnected:(BOOL)arg1 ;
-(void)setPaired:(BOOL)arg1 ;
-(NSString *)udid;
-(BOOL)paired;
-(void)setWifiAddress:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)internalModel;
-(void)setUdid:(NSString *)arg1 ;
-(void)setInternalModel:(NSString *)arg1 ;
-(id)description;
-(NSString *)wifiAddress;
-(void)setPlaceholder:(BOOL)arg1 ;
-(BOOL)placeholder;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

