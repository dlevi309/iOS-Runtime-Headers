/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@interface MSPSharedTripPeer : NSObject {

	BOOL _canControlSharing;
	BOOL _canControlReceiving;

}

@property (nonatomic,readonly) BOOL canControlSharing;                //@synthesize canControlSharing=_canControlSharing - In the implementation block
@property (nonatomic,readonly) BOOL canControlReceiving;              //@synthesize canControlReceiving=_canControlReceiving - In the implementation block
-(id)initWithConnection:(id)arg1 ;
-(BOOL)canControlReceiving;
-(BOOL)canControlSharing;
@end

