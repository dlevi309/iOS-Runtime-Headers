/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSDictionary, NSURL;

@interface AMSMediaVideo : NSObject {

	NSDictionary* _videoDictionary;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,copy,readonly) NSDictionary * videoDictionary;              //@synthesize videoDictionary=_videoDictionary - In the implementation block
-(NSDictionary *)videoDictionary;
-(id)initWithDictionary:(id)arg1 ;
-(id)name;
-(NSURL *)URL;
@end

