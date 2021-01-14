/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@protocol CDPKeychainCircleProxy, CDPSecureChannelProxy, CDPDCircleProxy;
@class CDPContext;

@interface CDPDSecureChannelContext : NSObject {

	CDPContext* _context;
	id<CDPKeychainCircleProxy> _keychainCircleProxy;
	id<CDPSecureChannelProxy> _secureChannelProxy;
	id<CDPDCircleProxy> _circleProxy;

}

@property (nonatomic,retain) id<CDPKeychainCircleProxy> keychainCircleProxy;              //@synthesize keychainCircleProxy=_keychainCircleProxy - In the implementation block
@property (nonatomic,retain) id<CDPSecureChannelProxy> secureChannelProxy;                //@synthesize secureChannelProxy=_secureChannelProxy - In the implementation block
@property (nonatomic,retain) id<CDPDCircleProxy> circleProxy;                             //@synthesize circleProxy=_circleProxy - In the implementation block
-(id<CDPDCircleProxy>)circleProxy;
-(void)setCircleProxy:(id<CDPDCircleProxy>)arg1 ;
-(void)dealloc;
-(BOOL)initialize:(id*)arg1 ;
-(id)initWithContext:(id)arg1 circleProxy:(id)arg2 ;
-(id)initWithChannel:(id)arg1 dataProvider:(id)arg2 circleProxy:(id)arg3 ;
-(id<CDPKeychainCircleProxy>)keychainCircleProxy;
-(void)setKeychainCircleProxy:(id<CDPKeychainCircleProxy>)arg1 ;
-(id<CDPSecureChannelProxy>)secureChannelProxy;
-(void)setSecureChannelProxy:(id<CDPSecureChannelProxy>)arg1 ;
@end

