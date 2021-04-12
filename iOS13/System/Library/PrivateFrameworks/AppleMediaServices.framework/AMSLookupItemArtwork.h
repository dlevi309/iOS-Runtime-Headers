/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)width;
-(double)height;
-(NSString *)URLString;
-(NSDictionary *)artworkDictionary;
-(id)initWithArtworkDictionary:(id)arg1 ;
-(id)colorWithKind:(id)arg1 ;
-(id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4 ;
@end

