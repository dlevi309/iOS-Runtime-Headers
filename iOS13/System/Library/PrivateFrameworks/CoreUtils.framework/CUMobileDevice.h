/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setPlaceholder:(BOOL)arg1 ;
-(BOOL)placeholder;
-(void)setConnected:(BOOL)arg1 ;
-(BOOL)connected;
-(NSString *)internalModel;
-(void)setInternalModel:(NSString *)arg1 ;
-(BOOL)paired;
-(void)setPaired:(BOOL)arg1 ;
-(NSString *)udid;
-(void)setUdid:(NSString *)arg1 ;
-(NSString *)wifiAddress;
-(void)setWifiAddress:(NSString *)arg1 ;
@end

