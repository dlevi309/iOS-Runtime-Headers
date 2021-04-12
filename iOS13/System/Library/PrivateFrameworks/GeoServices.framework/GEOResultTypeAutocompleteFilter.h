/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOAutocompleteFilter.h>

@interface GEOResultTypeAutocompleteFilter : NSObject <GEOAutocompleteFilter> {

	unsigned long long _types;

}

@property (nonatomic,readonly) unsigned long long types;              //@synthesize types=_types - In the implementation block
-(id)init;
-(unsigned long long)types;
-(BOOL)applyToAutocompleteParameters:(id)arg1 error:(id*)arg2 ;
-(id)initWithResultTypes:(unsigned long long)arg1 ;
@end

