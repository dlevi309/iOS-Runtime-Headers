/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@class NSArray, SHSignature;

@interface SHMatch : NSObject {

	NSArray* _mediaItems;
	SHSignature* _signature;

}

@property (nonatomic,readonly) NSArray * mediaItems;                 //@synthesize mediaItems=_mediaItems - In the implementation block
@property (nonatomic,readonly) SHSignature * signature;              //@synthesize signature=_signature - In the implementation block
-(SHSignature *)signature;
-(NSArray *)mediaItems;
-(id)initWithMediaItems:(id)arg1 forSignature:(id)arg2 ;
@end

