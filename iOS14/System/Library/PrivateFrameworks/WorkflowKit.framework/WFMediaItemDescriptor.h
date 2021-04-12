/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSNumber, NSData, NSDictionary;

@interface WFMediaItemDescriptor : MTLModel <NSSecureCoding, MTLJSONSerializing> {

	NSString* _itemName;
	NSNumber* _persistentIdentifier;
	NSData* _playbackArchiveData;
	NSString* _type;

}

@property (nonatomic,copy,readonly) NSString * itemName;                          //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * playbackArchiveData;                 //@synthesize playbackArchiveData=_playbackArchiveData - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)playbackArchiveDataJSONTransformer;
-(NSNumber *)persistentIdentifier;
-(NSString *)itemName;
-(NSString *)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMediaItemName:(id)arg1 persistentIdentifier:(id)arg2 mediaType:(id)arg3 ;
-(id)initWithMediaItemName:(id)arg1 playbackArchiveData:(id)arg2 ;
-(NSData *)playbackArchiveData;
@end

