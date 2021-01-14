/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, CSCoder;

@interface SGSearchableItemSerializedAttributes : NSObject <NSCopying> {

	NSData* _attributeSetData;
	CSCoder* _attributeSetCoder;
	NSData* _htmlContentData;

}

@property (nonatomic,readonly) NSData * attributeSetData;                //@synthesize attributeSetData=_attributeSetData - In the implementation block
@property (nonatomic,readonly) CSCoder * attributeSetCoder;              //@synthesize attributeSetCoder=_attributeSetCoder - In the implementation block
@property (nonatomic,readonly) NSData * htmlContentData;                 //@synthesize htmlContentData=_htmlContentData - In the implementation block
+(id)serializedAttributesWithAttributeSetData:(id)arg1 attributeSetCoder:(id)arg2 htmlContentData:(id)arg3 ;
-(id)init;
-(id)initWithAttributeSetData:(id)arg1 attributeSetCoder:(id)arg2 htmlContentData:(id)arg3 ;
-(BOOL)isEqualToSerializedAttributes:(id)arg1 ;
-(NSData *)attributeSetData;
-(CSCoder *)attributeSetCoder;
-(NSData *)htmlContentData;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

