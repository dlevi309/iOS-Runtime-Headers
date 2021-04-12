/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceDataRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface BWInferenceMetadataRequirement : BWInferenceDataRequirement <NSCopying> {

	short _mappingOption;
	NSArray* _metadataKeys;

}

@property (nonatomic,copy,readonly) NSArray * metadataKeys;              //@synthesize metadataKeys=_metadataKeys - In the implementation block
@property (nonatomic,readonly) short mappingOption;                      //@synthesize mappingOption=_mappingOption - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMetadataKeys:(id)arg1 ;
-(id)initWithMetadataKeys:(id)arg1 mappingOption:(short)arg2 ;
-(NSArray *)metadataKeys;
-(short)mappingOption;
-(id)initWithMetadataRequirement:(id)arg1 ;
@end

