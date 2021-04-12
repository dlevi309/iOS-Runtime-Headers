/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPPlaybackContext.h>

@class NSString;

@interface _MPCNullPlaybackContext : MPPlaybackContext {

	NSString* _label;

}

@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)queueFeederClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)descriptionComponents;
@end

