/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_xpc_object;
@class NSString, NSObject;

@interface GEOResourceManifestUpdateAssertion : NSObject {

	NSString* _reason;
	double _creationTimestamp;
	NSObject*<OS_xpc_object> _connection;
	int _notifyToken;

}
-(id)init;
-(void)_connectToGeod;
-(id)initWithReason:(id)arg1 ;
-(id)debugDescription;
-(void)dealloc;
@end

