/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRelatedProperties:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)relatedProperties;
@end

