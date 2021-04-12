/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MPSectionedIdentifierListPosition : NSObject <NSSecureCoding> {

	NSString* _sectionIdentifier;
	NSString* _itemIdentifier;
	long long _entryType;

}

@property (nonatomic,readonly) NSString * sectionIdentifier;              //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;                 //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) long long entryType;                       //@synthesize entryType=_entryType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)positionForHeadOfSection:(id)arg1 ;
+(id)positionForItem:(id)arg1 inSection:(id)arg2 ;
+(id)positionForTailOfSection:(id)arg1 ;
-(NSString *)itemIdentifier;
-(NSString *)sectionIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(long long)entryType;
-(BOOL)isEqual:(id)arg1 ;
@end

