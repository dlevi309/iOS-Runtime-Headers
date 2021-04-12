/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDictionary, NSData;

@interface ICAuthorizeMachineResponse : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSData * keybagData; 
@property (nonatomic,copy,readonly) NSData * tokenData; 
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSData *)tokenData;
-(NSData *)keybagData;
@end

