/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/CXCopying.h>

@class NSUUID, NSString;

@interface CXCall : NSObject <NSSecureCoding, CXCopying> {

	BOOL _outgoing;
	BOOL _onHold;
	BOOL _hasConnected;
	BOOL _hasEnded;
	BOOL _endpointOnCurrentDevice;
	BOOL _hostedOnCurrentDevice;
	BOOL _video;
	NSUUID* _UUID;
	NSString* _providerIdentifier;

}

@property (nonatomic,retain) NSString * providerIdentifier;                                              //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (assign,getter=isOutgoing,nonatomic) BOOL outgoing;                                            //@synthesize outgoing=_outgoing - In the implementation block
@property (assign,getter=isOnHold,nonatomic) BOOL onHold;                                                //@synthesize onHold=_onHold - In the implementation block
@property (assign,nonatomic) BOOL hasConnected;                                                          //@synthesize hasConnected=_hasConnected - In the implementation block
@property (assign,nonatomic) BOOL hasEnded;                                                              //@synthesize hasEnded=_hasEnded - In the implementation block
@property (assign,getter=isEndpointOnCurrentDevice,nonatomic) BOOL endpointOnCurrentDevice;              //@synthesize endpointOnCurrentDevice=_endpointOnCurrentDevice - In the implementation block
@property (assign,getter=isHostedOnCurrentDevice,nonatomic) BOOL hostedOnCurrentDevice;                  //@synthesize hostedOnCurrentDevice=_hostedOnCurrentDevice - In the implementation block
@property (assign,getter=isVideo,nonatomic) BOOL video;                                                  //@synthesize video=_video - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * UUID;                                                       //@synthesize UUID=_UUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)hasEnded;
-(BOOL)isOutgoing;
-(void)setVideo:(BOOL)arg1 ;
-(NSString *)providerIdentifier;
-(NSUUID *)UUID;
-(id)init;
-(void)setHasConnected:(BOOL)arg1 ;
-(void)setProviderIdentifier:(NSString *)arg1 ;
-(BOOL)isEndpointOnCurrentDevice;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToCall:(id)arg1 ;
-(void)setOutgoing:(BOOL)arg1 ;
-(void)setOnHold:(BOOL)arg1 ;
-(BOOL)isVideo;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isOnHold;
-(BOOL)isHostedOnCurrentDevice;
-(BOOL)hasConnected;
-(void)setHostedOnCurrentDevice:(BOOL)arg1 ;
-(void)setEndpointOnCurrentDevice:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(id)sanitizedCopy;
-(void)setHasEnded:(BOOL)arg1 ;
@end

