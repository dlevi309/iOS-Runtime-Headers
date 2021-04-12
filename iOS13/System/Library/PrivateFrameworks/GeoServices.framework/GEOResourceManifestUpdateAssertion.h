/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)debugDescription;
-(id)initWithReason:(id)arg1 ;
-(void)_connectToGeod;
@end

