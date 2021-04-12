/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface RadioArtwork : NSObject <NSCopying> {

	NSURL* _URL;
	CGSize _pixelSize;

}

@property (nonatomic,readonly) CGSize pixelSize;              //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,readonly) CGSize pointSize; 
@property (nonatomic,readonly) NSURL * URL;                   //@synthesize URL=_URL - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(CGSize)pointSize;
-(CGSize)pixelSize;
-(id)initWithArtworkDictionary:(id)arg1 ;
-(id)initWithArtworkURL:(id)arg1 pixelSize:(CGSize)arg2 ;
@end

