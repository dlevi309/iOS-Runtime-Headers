/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSDictionary;

@interface AMSMediaArtwork : NSObject {

	NSDictionary* _artworkDictionary;

}

@property (nonatomic,readonly) NSDictionary * artworkDictionary;              //@synthesize artworkDictionary=_artworkDictionary - In the implementation block
@property (nonatomic,readonly) CGSize artworkSize; 
-(id)initWithDictionary:(id)arg1 ;
-(double)width;
-(double)height;
-(id)URLString;
-(NSDictionary *)artworkDictionary;
-(id)URLWithSize:(CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3 ;
-(CGColorRef)colorWithKind:(id)arg1 ;
-(unsigned long long)_qualityForFormat:(id)arg1 ;
-(id)URLWithSize:(CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3 quality:(unsigned long long)arg4 ;
-(CGSize)artworkSize;
-(id)URLWithSize:(CGSize)arg1 ;
@end

