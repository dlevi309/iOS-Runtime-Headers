/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CPLContainerRelation : NSObject <NSSecureCoding, NSCopying> {

	BOOL _keyAsset;
	NSString* _containerIdentifier;
	long long _position;

}

@property (nonatomic,copy) NSString * containerIdentifier;                 //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) long long position;                           //@synthesize position=_position - In the implementation block
@property (assign,getter=isKeyAsset,nonatomic) BOOL keyAsset;              //@synthesize keyAsset=_keyAsset - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)position;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(void)setPosition:(long long)arg1 ;
-(void)setKeyAsset:(BOOL)arg1 ;
-(BOOL)isKeyAsset;
-(id)proposedScopedIdentifierForItemScopedIdentifier:(id)arg1 ;
-(id)proposedIdentifierForItemIdentifier:(id)arg1 ;
@end

