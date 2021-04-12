/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@class NSData, NSSet;

@interface NWTLSParameters : NSObject {

	NSData* _TLSSessionID;
	NSSet* _SSLCipherSuites;
	unsigned long long _minimumSSLProtocolVersion;
	unsigned long long _maximumSSLProtocolVersion;

}

@property (copy) NSData * TLSSessionID;                                       //@synthesize TLSSessionID=_TLSSessionID - In the implementation block
@property (setter=SLCipherSuites,copy) NSSet * SSLCipherSuites;               //@synthesize SSLCipherSuites=_SSLCipherSuites - In the implementation block
@property (assign) unsigned long long minimumSSLProtocolVersion;              //@synthesize minimumSSLProtocolVersion=_minimumSSLProtocolVersion - In the implementation block
@property (assign) unsigned long long maximumSSLProtocolVersion;              //@synthesize maximumSSLProtocolVersion=_maximumSSLProtocolVersion - In the implementation block
-(void)setSSLCipherSuites:(NSSet *)arg1 ;
-(unsigned long long)minimumSSLProtocolVersion;
-(void)setMinimumSSLProtocolVersion:(unsigned long long)arg1 ;
-(void)setTLSSessionID:(NSData *)arg1 ;
-(NSSet *)SSLCipherSuites;
-(void)setMaximumSSLProtocolVersion:(unsigned long long)arg1 ;
-(unsigned long long)maximumSSLProtocolVersion;
-(NSData *)TLSSessionID;
@end

