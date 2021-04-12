/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMetadataGroup.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVDateRangeMetadataGroupInternal, NSDate, NSArray;

@interface AVDateRangeMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {

	AVDateRangeMetadataGroupInternal* _priv;

}

@property (nonatomic,readonly) NSDate * discoveryTimestamp; 
@property (nonatomic,readonly) NSDate * modificationTimestamp; 
@property (getter=_dateRangeMetadataGroupInternal,nonatomic,readonly) AVDateRangeMetadataGroupInternal * dateRangeMetadataGroupInternal; 
@property (nonatomic,copy,readonly) NSDate * startDate; 
@property (nonatomic,copy,readonly) NSDate * endDate; 
@property (nonatomic,copy,readonly) NSArray * items; 
+(id)_figMetadataArrayForMetadataItems:(id)arg1 ;
+(id)_metadataItemsForFigMetadataArray:(id)arg1 ;
-(id)initWithPropertyList:(id)arg1 ;
-(NSDate *)endDate;
-(id)uniqueID;
-(id)init;
-(id)classifyingLabel;
-(id)_initWithTaggedRangeMetadataDictionary:(id)arg1 items:(id)arg2 ;
-(NSDate *)modificationTimestamp;
-(NSDate *)startDate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithItems:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)_taggedRangeMetadataDictionary;
-(void)_extractPropertiesFromTaggedRangeMetadataDictionary:(id)arg1 ;
-(id)_dateRangeMetadataGroupInternal;
-(NSArray *)items;
-(id)description;
-(NSDate *)discoveryTimestamp;
-(unsigned long long)hash;
-(id)propertyList;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

