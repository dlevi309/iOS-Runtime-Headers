/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@class NSDictionary;

@interface AMSMediaArtwork : NSObject {

	NSDictionary* _artworkDictionary;

}

@property (nonatomic,readonly) NSDictionary * artworkDictionary;              //@synthesize artworkDictionary=_artworkDictionary - In the implementation block
@property (nonatomic,readonly) CGSize artworkSize; 
-(id)URLString;
-(CGSize)artworkSize;
-(double)width;
-(CGColorRef)colorWithKind:(id)arg1 ;
-(id)URLWithSize:(CGSize)arg1 ;
-(unsigned long long)_qualityForFormat:(id)arg1 ;
-(id)URLWithSize:(CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3 quality:(unsigned long long)arg4 ;
-(id)URLWithSize:(CGSize)arg1 cropStyle:(id)arg2 format:(id)arg3 ;
-(double)height;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)artworkDictionary;
@end

