/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOXPCReply.h>
#import <libobjc.A.dylib/GEOXPCReply.h>

@class GEOImageServiceResponse, NSString;

@interface GEOImageServiceReplySimple : GEOXPCReply <GEOXPCReply> {

	GEOImageServiceResponse* _response;

}

@property (nonatomic,retain) GEOImageServiceResponse * response;              //@synthesize response=_response - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)encodeToXPCDictionary:(id)arg1 ;
-(BOOL)isValid;
-(GEOImageServiceResponse *)response;
-(void)setResponse:(GEOImageServiceResponse *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
@end

