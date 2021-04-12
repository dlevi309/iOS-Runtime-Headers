/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
*/

#import <libobjc.A.dylib/FUFlightFactoryInternalProtocol.h>

@class NSString;

@interface FUFlightFactory : NSObject <FUFlightFactoryInternalProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)flightFactoryClassWithProvider:(id)arg1 ;
+(void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 userAgent:(id)arg5 sessionID:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
+(void)loadFlightDataWithFlightNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)loadFlightWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)parseFlightData:(id)arg1 withError:(id*)arg2 ;
@end

