/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUPickerFilter.h>

@class NSArray, NSString;

@interface PUPickerCompoundFilter : NSObject <PUPickerFilter> {

	long long _filterType;
	NSArray* _subfilters;

}

@property (nonatomic,readonly) long long filterType;                   //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subfilters;              //@synthesize subfilters=_subfilters - In the implementation block
@property (nonatomic,readonly) BOOL isValidFilter; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(long long)filterType;
-(BOOL)isValidFilter;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)generatedGenericAssetTypes;
-(id)generatedAssetPredicate;
-(NSArray *)subfilters;
-(unsigned long long)generatedSearchQueryFilterOptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFilterType:(long long)arg1 subfilters:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

