/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelKind.h>

@class NSDictionary;

@interface MPModelGenericObjectKind : MPModelKind {

	NSDictionary* _relationshipKinds;

}

@property (nonatomic,readonly) NSDictionary * relationshipKinds;              //@synthesize relationshipKinds=_relationshipKinds - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)kindWithRelationshipKinds:(id)arg1 ;
+(id)identityKind;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)humanDescription;
-(NSDictionary *)relationshipKinds;
-(BOOL)isEqual:(id)arg1 ;
@end

