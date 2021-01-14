/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithArtworkDictionary:(id)arg1 ;
-(CGSize)pointSize;
-(id)description;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)pixelSize;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithArtworkURL:(id)arg1 pixelSize:(CGSize)arg2 ;
@end

