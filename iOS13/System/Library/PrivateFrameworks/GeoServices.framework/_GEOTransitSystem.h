/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOTransitSystem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, GEOPBTransitSystem, GEOStyleAttributes;

@interface _GEOTransitSystem : NSObject <GEOTransitSystem, NSSecureCoding> {

	GEOPBTransitSystem* _system;

}

@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEOStyleAttributes *)styleAttributes;
-(unsigned long long)muid;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id)initWithSystem:(id)arg1 ;
@end

