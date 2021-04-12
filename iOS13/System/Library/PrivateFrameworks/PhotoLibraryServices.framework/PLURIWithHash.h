/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSObject*<OS_xpc_object>)uri;
-(id)initWithXPCURI:(id)arg1 ;
-(void)setUri:(NSObject*<OS_xpc_object>)arg1 ;
-(unsigned long long)uriHash;
-(void)setUriHash:(unsigned long long)arg1 ;
@end

