/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOXPCRequest.h>
#import <libobjc.A.dylib/GEOXPCRequest.h>

@class NSString;

@interface GEOImageServicePurgeCacheToSizeRequest : GEOXPCRequest <GEOXPCRequest> {

	unsigned long long _targetSize;

}

@property (assign,nonatomic) unsigned long long targetSize;              //@synthesize targetSize=_targetSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)replyClass;
-(unsigned long long)targetSize;
-(void)setTargetSize:(unsigned long long)arg1 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(BOOL)expectsReply;
-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
@end

