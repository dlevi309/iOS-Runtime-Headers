/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDAccessoryBrowserDelegate;
@class NSString, NSData;

@interface HMDPairedAccessoryInformation : NSObject {

	NSString* _identifier;
	NSData* _setupHash;
	unsigned long long _transports;
	id<HMDAccessoryBrowserDelegate> _delegate;

}

@property (readonly) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSData * setupHash;                                           //@synthesize setupHash=_setupHash - In the implementation block
@property (readonly) unsigned long long transports;                                //@synthesize transports=_transports - In the implementation block
@property (__weak,readonly) id<HMDAccessoryBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<HMDAccessoryBrowserDelegate>)delegate;
-(unsigned long long)hash;
-(unsigned long long)transports;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)setupHash;
-(id)initWithIdentifier:(id)arg1 transports:(unsigned long long)arg2 setupHash:(id)arg3 delegate:(id)arg4 ;
@end

