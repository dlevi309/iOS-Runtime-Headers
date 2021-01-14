/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOAbstractRequestResponseTicket.h>
#import <libobjc.A.dylib/GEOMapServiceAllCollectionsViewTicket.h>

@class GEOMapServiceTraits, NSString;

@interface _GEOAllCollectionViewTicket : GEOAbstractRequestResponseTicket <GEOMapServiceAllCollectionsViewTicket>

@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)parseAllCollectionViewResponse:(id)arg1 usingError:(id)arg2 usingUserInfo:(id)arg3 onCompletionHandler:(/*^block*/id)arg4 ;
@end

