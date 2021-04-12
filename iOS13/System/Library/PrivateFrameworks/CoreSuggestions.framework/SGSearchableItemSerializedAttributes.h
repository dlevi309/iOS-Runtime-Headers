/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAttributeSetData:(id)arg1 attributeSetCoder:(id)arg2 htmlContentData:(id)arg3 ;
-(BOOL)isEqualToSerializedAttributes:(id)arg1 ;
-(NSData *)attributeSetData;
-(CSCoder *)attributeSetCoder;
-(NSData *)htmlContentData;
@end

