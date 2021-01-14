/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, REFeatureMap;

@interface REMLElement : NSObject <REAutomaticExportedInterface, NSCopying> {

	NSString* _identifier;
	REFeatureMap* _featureMap;

}

@property (nonatomic,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) REFeatureMap * featureMap;              //@synthesize featureMap=_featureMap - In the implementation block
-(id)description;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(REFeatureMap *)featureMap;
-(id)initWithIdentifier:(id)arg1 featureMap:(id)arg2 ;
@end

