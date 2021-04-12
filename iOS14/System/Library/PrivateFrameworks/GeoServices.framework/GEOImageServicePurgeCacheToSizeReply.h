/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOXPCReply.h>
#import <libobjc.A.dylib/GEOXPCReply.h>

@class NSString;

@interface GEOImageServicePurgeCacheToSizeReply : GEOXPCReply <GEOXPCReply> {

	unsigned long long _amountDeleted;

}

@property (assign,nonatomic) unsigned long long amountDeleted;              //@synthesize amountDeleted=_amountDeleted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAmountDeleted:(unsigned long long)arg1 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(unsigned long long)amountDeleted;
-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
@end

