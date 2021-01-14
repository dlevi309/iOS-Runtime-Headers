/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setKeyPath:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)keyPath;
@end

