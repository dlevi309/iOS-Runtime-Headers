/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTransitConnectionInfo.h>

@class NSString, NSArray, NSURL, GEOPDTransitConnection;

@interface _GEOTransitConnectionInfo : NSObject <GEOTransitConnectionInfo> {

	GEOPDTransitConnection* _connection;
	int _providerID;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) NSURL * urlToOpen; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) int providerID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)providerID;
-(NSString *)name;
-(NSArray *)labelItems;
-(unsigned long long)muid;
-(NSURL *)urlToOpen;
-(id)initWithConnection:(id)arg1 providerID:(int)arg2 ;
@end

