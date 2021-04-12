/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWInferenceDataRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface BWInferenceMetadataRequirement : BWInferenceDataRequirement <NSCopying> {

	short _mappingOption;
	NSArray* _metadataKeys;

}

@property (nonatomic,copy,readonly) NSArray * metadataKeys;              //@synthesize metadataKeys=_metadataKeys - In the implementation block
@property (nonatomic,readonly) short mappingOption;                      //@synthesize mappingOption=_mappingOption - In the implementation block
-(id)description;
-(NSArray *)metadataKeys;
-(short)mappingOption;
-(id)initWithMetadataKeys:(id)arg1 mappingOption:(short)arg2 ;
-(id)initWithMetadataRequirement:(id)arg1 ;
-(id)initWithMetadataKeys:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

