/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface MPMusicPlayerControllerApplicationQueueModifications : NSObject <NSSecureCoding> {

	NSDictionary* _insertedDescriptors;
	NSArray* _removedItemIdentifiers;

}

@property (nonatomic,readonly) NSDictionary * insertedDescriptors;              //@synthesize insertedDescriptors=_insertedDescriptors - In the implementation block
@property (nonatomic,readonly) NSArray * removedItemIdentifiers;                //@synthesize removedItemIdentifiers=_removedItemIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)insertedDescriptors;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInsertedDescriptors:(id)arg1 removedItemIdentifiers:(id)arg2 ;
-(NSArray *)removedItemIdentifiers;
@end

