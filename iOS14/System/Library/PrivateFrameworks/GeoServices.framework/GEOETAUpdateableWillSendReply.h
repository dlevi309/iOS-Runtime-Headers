/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOXPCReply.h>
#import <libobjc.A.dylib/GEOXPCReply.h>

@class GEOETATrafficUpdateRequest, NSString;

@interface GEOETAUpdateableWillSendReply : GEOXPCReply <GEOXPCReply> {

	GEOETATrafficUpdateRequest* _updatedRequest;

}

@property (nonatomic,retain) GEOETATrafficUpdateRequest * updatedRequest;              //@synthesize updatedRequest=_updatedRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUpdatedRequest:(GEOETATrafficUpdateRequest *)arg1 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(GEOETATrafficUpdateRequest *)updatedRequest;
@end

