/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelKind.h>

@class NSDictionary;

@interface MPModelGenericObjectKind : MPModelKind {

	NSDictionary* _relationshipKinds;

}

@property (nonatomic,readonly) NSDictionary * relationshipKinds;              //@synthesize relationshipKinds=_relationshipKinds - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityKind;
+(id)kindWithRelationshipKinds:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)humanDescription;
-(NSDictionary *)relationshipKinds;
@end

