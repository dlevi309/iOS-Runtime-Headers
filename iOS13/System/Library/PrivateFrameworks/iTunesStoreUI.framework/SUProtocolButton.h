/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(NSString *)buttonTitle;
-(NSString *)buttonTarget;
-(NSString *)buttonLocation;
-(id)initWithButtonDictionary:(id)arg1 ;
-(NSDictionary *)buttonDictionary;
@end

