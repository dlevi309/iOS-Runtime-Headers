/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOSearchFilter.h>

@interface GEOResultTypeSearchFilter : NSObject <GEOSearchFilter> {

	unsigned long long _types;

}

@property (nonatomic,readonly) unsigned long long types;              //@synthesize types=_types - In the implementation block
-(unsigned long long)types;
-(id)init;
-(BOOL)applyToSearchParameters:(id)arg1 error:(id*)arg2 ;
-(id)initWithResultTypes:(unsigned long long)arg1 ;
@end

