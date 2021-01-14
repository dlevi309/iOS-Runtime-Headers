/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOXPCRequest.h>
#import <libobjc.A.dylib/GEOXPCRequest.h>

@class NSString;

@interface GEOResourceManifestUpdateAssertionXPCCheckinRequest : GEOXPCRequest <GEOXPCRequest> {

	NSString* _reason;
	double _timestamp;

}

@property (nonatomic,retain) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)replyClass;
-(double)timestamp;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(NSString *)reason;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
@end

