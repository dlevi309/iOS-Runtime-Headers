/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDictionary, NSData;

@interface ICAuthorizeMachineResponse : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSData * keybagData; 
@property (nonatomic,copy,readonly) NSData * tokenData; 
-(NSData *)tokenData;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSData *)keybagData;
@end

