/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSDictionary, NSString;

@interface AMSLookupItemArtwork : NSObject {

	NSDictionary* _artworkDictionary;

}

@property (nonatomic,readonly) NSDictionary * artworkDictionary;              //@synthesize artworkDictionary=_artworkDictionary - In the implementation block
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) double width; 
-(NSString *)URLString;
-(double)width;
-(id)initWithArtworkDictionary:(id)arg1 ;
-(id)colorWithKind:(id)arg1 ;
-(id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4 ;
-(double)height;
-(NSDictionary *)artworkDictionary;
@end

