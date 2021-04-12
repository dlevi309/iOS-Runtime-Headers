/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDRetainedSearchMetadata, NSString;

@interface GEORetainedSearchMetadata : NSObject <NSCopying> {

	GEOPDRetainedSearchMetadata* _retainedSearchMetadata;

}

@property (getter=_query,nonatomic,readonly) NSString * query; 
-(id)_query;
-(id)_retainedSearchMetadata;
-(id)initWithRetainedSearchMetadata:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

