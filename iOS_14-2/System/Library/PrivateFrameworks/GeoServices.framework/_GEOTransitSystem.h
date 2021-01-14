/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTransitSystem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, GEOPBTransitSystem, GEOStyleAttributes;

@interface _GEOTransitSystem : NSObject <GEOTransitSystem, NSSecureCoding> {

	GEOPBTransitSystem* _system;

}

@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(GEOStyleAttributes *)styleAttributes;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)muid;
-(id)initWithSystem:(id)arg1 ;
@end

