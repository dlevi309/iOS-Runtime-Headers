/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSDictionaryCoding.h>

@class NSString;

@interface FlexTransition : NSObject <NSCopying, NSDictionaryCoding> {

	BOOL _prevented;
	BOOL _useNextSegmentForFadeOut;
	long long _fadeOut;
	long long _fadeIn;
	NSString* _transitionSegmentName;

}

@property (nonatomic,readonly) BOOL prevented;                                     //@synthesize prevented=_prevented - In the implementation block
@property (nonatomic,readonly) long long fadeOut;                                  //@synthesize fadeOut=_fadeOut - In the implementation block
@property (nonatomic,readonly) long long fadeIn;                                   //@synthesize fadeIn=_fadeIn - In the implementation block
@property (nonatomic,copy,readonly) NSString * transitionSegmentName;              //@synthesize transitionSegmentName=_transitionSegmentName - In the implementation block
@property (nonatomic,readonly) BOOL useNextSegmentForFadeOut;                      //@synthesize useNextSegmentForFadeOut=_useNextSegmentForFadeOut - In the implementation block
+(long long)validFadeLengthForLength:(long long)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(long long)fadeOut;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)fadeIn;
-(id)encodeAsDictionary;
-(BOOL)isDefaultTransition;
-(BOOL)prevented;
-(NSString *)transitionSegmentName;
-(BOOL)useNextSegmentForFadeOut;
-(id)initWithTransitionSegmentNamed:(id)arg1 prevented:(BOOL)arg2 fadeOut:(long long)arg3 fadeIn:(long long)arg4 useNextSegmentForFadeOut:(BOOL)arg5 ;
@end

