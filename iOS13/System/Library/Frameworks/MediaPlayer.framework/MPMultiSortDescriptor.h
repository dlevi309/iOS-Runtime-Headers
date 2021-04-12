/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <Foundation/NSSortDescriptor.h>

@class NSDictionary;

@interface MPMultiSortDescriptor : NSSortDescriptor {

	NSDictionary* _relatedProperties;

}

@property (nonatomic,copy) NSDictionary * relatedProperties;              //@synthesize relatedProperties=_relatedProperties - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sortDescriptorWithRelatedProperties:(id)arg1 ascending:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)relatedProperties;
-(void)setRelatedProperties:(NSDictionary *)arg1 ;
@end

