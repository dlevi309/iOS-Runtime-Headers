/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,copy,readonly) NSUUID * UUID;                                                       //@synthesize UUID=_UUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)providerIdentifier;
-(void)setProviderIdentifier:(NSString *)arg1 ;
-(NSUUID *)UUID;
-(id)initWithUUID:(id)arg1 ;
-(BOOL)isOutgoing;
-(BOOL)hasConnected;
-(BOOL)hasEnded;
-(void)setHasConnected:(BOOL)arg1 ;
-(BOOL)isHostedOnCurrentDevice;
-(BOOL)isEndpointOnCurrentDevice;
-(void)setOutgoing:(BOOL)arg1 ;
-(void)setHostedOnCurrentDevice:(BOOL)arg1 ;
-(void)setEndpointOnCurrentDevice:(BOOL)arg1 ;
-(BOOL)isOnHold;
-(BOOL)isEqualToCall:(id)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(id)sanitizedCopy;
-(void)setOnHold:(BOOL)arg1 ;
-(void)setHasEnded:(BOOL)arg1 ;
@end

