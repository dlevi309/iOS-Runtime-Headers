/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@class NSArray, SHSignature;

@interface SHPotentialMatch : NSObject {

	NSArray* _mediaItems;
	SHSignature* _signature;

}

@property (nonatomic,readonly) NSArray * mediaItems;                 //@synthesize mediaItems=_mediaItems - In the implementation block
@property (nonatomic,readonly) SHSignature * signature;              //@synthesize signature=_signature - In the implementation block
-(SHSignature *)signature;
-(NSArray *)mediaItems;
-(id)initWithSignature:(id)arg1 representingMediaItems:(id)arg2 ;
@end

