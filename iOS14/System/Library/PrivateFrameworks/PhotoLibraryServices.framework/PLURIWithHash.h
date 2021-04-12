/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_xpc_object;
@class NSObject;

@interface PLURIWithHash : NSObject {

	NSObject*<OS_xpc_object> _uri;
	unsigned long long _uriHash;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> uri;              //@synthesize uri=_uri - In the implementation block
@property (assign,nonatomic) unsigned long long uriHash;                //@synthesize uriHash=_uriHash - In the implementation block
-(NSObject*<OS_xpc_object>)uri;
-(id)init;
-(void)setUri:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithXPCURI:(id)arg1 ;
-(void)setUriHash:(unsigned long long)arg1 ;
-(unsigned long long)uriHash;
@end

