/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/


@protocol CHSChronoWidgetServiceServer;
@interface CHSProactiveService : NSObject {

	id<CHSChronoWidgetServiceServer> _server;

}

@property (nonatomic,readonly) id<CHSChronoWidgetServiceServer> server;              //@synthesize server=_server - In the implementation block
-(id)init;
-(id)initWithServer:(id)arg1 ;
-(id<CHSChronoWidgetServiceServer>)server;
@end

