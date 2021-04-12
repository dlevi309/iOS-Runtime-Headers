/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(GEOSearchAttributionSource *)source;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSArray *)attributionApps;
-(BOOL)hasAttributionRequirement:(int)arg1 ;
-(id)logoPathForScale:(double)arg1 ;
-(NSString *)appAdamID;
-(NSString *)webBaseActionURL;
-(unsigned)requirementsMask;
-(id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4 ;
-(BOOL)shouldOpenInAppStore;
-(BOOL)supportsActionURLs;
-(id)snippetLogoPathForScale:(double)arg1 ;
-(void)addLogoPath:(id)arg1 ;
@end

