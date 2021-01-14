/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/


@interface OspreyChannelRequestOptions : NSObject {

	BOOL _compressionEnabled;
	BOOL _forceHTTPv2;

}

@property (assign,getter=isCompressionEnabled,nonatomic) BOOL compressionEnabled;              //@synthesize compressionEnabled=_compressionEnabled - In the implementation block
@property (assign,nonatomic) BOOL forceHTTPv2;                                                 //@synthesize forceHTTPv2=_forceHTTPv2 - In the implementation block
-(id)init;
-(BOOL)isCompressionEnabled;
-(void)setCompressionEnabled:(BOOL)arg1 ;
-(BOOL)forceHTTPv2;
-(void)setForceHTTPv2:(BOOL)arg1 ;
-(void)applyToOspreyMutableRequest:(id)arg1 ;
@end

