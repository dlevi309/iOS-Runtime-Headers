/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <Foundation/NSSortDescriptor.h>

@class NSArray;

@interface MPModelSortDescriptor : NSSortDescriptor {

	NSArray* _keyPath;

}

@property (nonatomic,copy) NSArray * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sortDescriptorWithKeyPath:(id)arg1 ascending:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)keyPath;
-(void)setKeyPath:(NSArray *)arg1 ;
@end

