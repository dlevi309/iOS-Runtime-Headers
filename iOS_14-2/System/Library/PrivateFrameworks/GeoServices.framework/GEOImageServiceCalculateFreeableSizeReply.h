/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOXPCReply.h>
#import <libobjc.A.dylib/GEOXPCReply.h>

@class NSString;

@interface GEOImageServiceCalculateFreeableSizeReply : GEOXPCReply <GEOXPCReply> {

	unsigned long long _size;

}

@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)size;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(BOOL)isValid;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
@end

