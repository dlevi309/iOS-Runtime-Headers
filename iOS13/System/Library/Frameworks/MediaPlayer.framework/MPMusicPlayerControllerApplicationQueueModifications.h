/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)insertedDescriptors;
-(id)initWithInsertedDescriptors:(id)arg1 removedItemIdentifiers:(id)arg2 ;
-(NSArray *)removedItemIdentifiers;
@end

