/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, SHSignature;

@interface SHMatch : NSObject <NSSecureCoding> {

	NSArray* _mediaItems;
	SHSignature* _signature;

}

@property (nonatomic,readonly) NSArray * mediaItems;                 //@synthesize mediaItems=_mediaItems - In the implementation block
@property (nonatomic,readonly) SHSignature * signature;              //@synthesize signature=_signature - In the implementation block
+(BOOL)supportsSecureCoding;
-(SHSignature *)signature;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)mediaItems;
-(id)initWithMediaItems:(id)arg1 forSignature:(id)arg2 ;
-(BOOL)containsMediaItemWithFuzzyTolerance:(id)arg1 ;
@end

