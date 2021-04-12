/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOPhoneNumberResolving.h>

@class GEOPNRReadersCache, NSString;

@interface GEOPhoneNumberResolverLocalProxy : NSObject <GEOPhoneNumberResolving> {

	GEOPNRReadersCache* _readersCache;

}

@property (nonatomic,retain,readonly) GEOPNRReadersCache * readersCache;              //@synthesize readersCache=_readersCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)resolveFullyQualifiedPhoneNumber:(id)arg1 inCountry:(id)arg2 withError:(id*)arg3 ;
-(id)resolvedStringForCC:(id)arg1 inCountry:(id)arg2 locationIndex:(unsigned)arg3 error:(id*)arg4 ;
-(id)resolveUnknownFormatPhoneNumber:(id)arg1 inCountry:(id)arg2 withError:(id*)arg3 ;
-(void)resolvePhoneNumbers:(id)arg1 handler:(/*^block*/id)arg2 queue:(id)arg3 ;
-(GEOPNRReadersCache *)readersCache;
@end

