/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOSearchAttributionSource, NSArray, NSString;

@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding> {

	GEOSearchAttributionSource* _source;
	NSArray* _logoPaths;
	NSArray* _snippetLogoPaths;
	NSString* _displayName;
	unsigned _attributionRequirementsMask;

}

@property (nonatomic,readonly) GEOSearchAttributionSource * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned version; 
@property (nonatomic,readonly) unsigned requirementsMask;                        //@synthesize attributionRequirementsMask=_attributionRequirementsMask - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL shouldOpenInAppStore; 
@property (nonatomic,readonly) NSString * webBaseActionURL; 
@property (nonatomic,readonly) NSArray * attributionApps; 
@property (nonatomic,readonly) NSString * appAdamID; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4 ;
-(id)snippetLogoPathForScale:(double)arg1 ;
-(BOOL)hasAttributionRequirement:(int)arg1 ;
-(NSArray *)attributionApps;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)requirementsMask;
-(id)description;
-(void)addLogoPath:(id)arg1 ;
-(id)logoPathForScale:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldOpenInAppStore;
-(NSString *)identifier;
-(NSString *)appAdamID;
-(NSString *)webBaseActionURL;
-(BOOL)supportsActionURLs;
-(unsigned)version;
-(NSString *)displayName;
-(GEOSearchAttributionSource *)source;
@end

