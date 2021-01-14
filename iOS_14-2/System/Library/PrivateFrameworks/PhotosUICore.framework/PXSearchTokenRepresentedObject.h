/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PSIQueryToken;

@interface PXSearchTokenRepresentedObject : NSObject <NSSecureCoding> {

	NSString* _title;
	PSIQueryToken* _queryToken;
	NSString* _priorityAssetUUID;

}

@property (nonatomic,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) PSIQueryToken * queryToken;                //@synthesize queryToken=_queryToken - In the implementation block
@property (nonatomic,readonly) NSString * priorityAssetUUID;              //@synthesize priorityAssetUUID=_priorityAssetUUID - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
-(NSString *)priorityAssetUUID;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithTitle:(id)arg1 queryToken:(id)arg2 ;
-(id)initWithTitle:(id)arg1 queryToken:(id)arg2 priorityAssetUUID:(id)arg3 ;
-(id)dictionaryForArchiving;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(PSIQueryToken *)queryToken;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

