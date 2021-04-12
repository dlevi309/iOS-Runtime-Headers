/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSDictionary, NSURL;

@interface SSLookupItemArtwork : NSObject {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * lookupDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) long long height; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,readonly) NSURL * URL; 
-(void)dealloc;
-(NSURL *)URL;
-(long long)width;
-(long long)height;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSDictionary *)lookupDictionary;
-(id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4 ;
-(id)URLWithHeight:(long long)arg1 width:(long long)arg2 ;
-(id)URLWithHeight:(long long)arg1 width:(long long)arg2 format:(id)arg3 ;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 forColorKind:(id)arg5 ;
@end

