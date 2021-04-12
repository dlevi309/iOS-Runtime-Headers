/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEOETATrafficUpdateRequest *)updatedRequest;
-(void)setUpdatedRequest:(GEOETATrafficUpdateRequest *)arg1 ;
@end

