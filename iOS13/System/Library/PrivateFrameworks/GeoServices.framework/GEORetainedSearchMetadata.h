/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDRetainedSearchMetadata, NSString;

@interface GEORetainedSearchMetadata : NSObject <NSCopying> {

	GEOPDRetainedSearchMetadata* _retainedSearchMetadata;

}

@property (getter=_query,nonatomic,readonly) NSString * query; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_query;
-(id)_retainedSearchMetadata;
-(id)initWithRetainedSearchMetadata:(id)arg1 ;
@end

