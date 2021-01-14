/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/


@class NSXPCConnection;

@interface CLHarvester : NSObject {

	NSXPCConnection* _connection;

}
-(void)connect;
-(void)submitSample:(id)arg1 ;
-(id)currentStateDictionary;
-(void)dealloc;
@end

