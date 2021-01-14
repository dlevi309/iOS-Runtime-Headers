/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSString, NSURL;

@interface SUProtocolButton : NSObject <NSCopying> {

	NSDictionary* _buttonDictionary;

}

@property (nonatomic,readonly) NSDictionary * buttonDictionary;              //@synthesize buttonDictionary=_buttonDictionary - In the implementation block
@property (nonatomic,readonly) NSString * buttonLocation; 
@property (nonatomic,readonly) NSString * buttonTarget; 
@property (nonatomic,readonly) NSString * buttonTitle; 
@property (nonatomic,readonly) NSURL * URL; 
-(NSString *)buttonTitle;
-(id)init;
-(NSString *)buttonLocation;
-(NSURL *)URL;
-(NSString *)buttonTarget;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithButtonDictionary:(id)arg1 ;
-(NSDictionary *)buttonDictionary;
@end

