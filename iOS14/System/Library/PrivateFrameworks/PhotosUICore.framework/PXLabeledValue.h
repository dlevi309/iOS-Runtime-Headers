/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PXLabeledValueType;
@class NSString;

@interface PXLabeledValue : NSObject <NSCopying> {

	BOOL _separator;
	id<PXLabeledValueType> _value;
	NSString* _localizedLabel;

}

@property (nonatomic,readonly) id<PXLabeledValueType> value;                   //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * localizedLabel;                      //@synthesize localizedLabel=_localizedLabel - In the implementation block
@property (getter=isSeparator,nonatomic,readonly) BOOL separator;              //@synthesize separator=_separator - In the implementation block
+(id)separatorLabeledValue;
-(NSString *)localizedLabel;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqualToLabeledValue:(id)arg1 ;
-(BOOL)isSeparator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<PXLabeledValueType>)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initSeparator;
-(id)initWithValue:(id)arg1 localizedLabel:(id)arg2 ;
@end

