/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTransitConnectionInfo.h>

@class NSString, NSArray, NSURL, GEOPDTransitConnection;

@interface _GEOTransitConnectionInfo : NSObject <GEOTransitConnectionInfo> {

	GEOPDTransitConnection* _connection;
	int _providerID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) NSURL * urlToOpen; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) int providerID; 
-(NSString *)name;
-(unsigned long long)muid;
-(NSArray *)labelItems;
-(int)providerID;
-(NSURL *)urlToOpen;
-(id)initWithConnection:(id)arg1 providerID:(int)arg2 ;
@end

