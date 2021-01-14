/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSRegularExpression, NSString;

@interface SUOverlayConfiguration : NSObject {

	NSRegularExpression* _bagKeyPattern;
	long long _cornerRadius;
	BOOL _shouldShowNavigationBar;
	CGSize _size;
	NSString* _transitionName;
	NSRegularExpression* _urlPattern;

}

@property (nonatomic,readonly) long long cornerRadius;                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowNavigationBar;              //@synthesize shouldShowNavigationBar=_shouldShowNavigationBar - In the implementation block
@property (nonatomic,readonly) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSString * transitionName;                 //@synthesize transitionName=_transitionName - In the implementation block
-(id)init;
-(BOOL)matchesURL:(id)arg1 ;
-(BOOL)shouldShowNavigationBar;
-(CGSize)size;
-(id)initWithDictionary:(id)arg1 ;
-(long long)cornerRadius;
-(void)dealloc;
-(NSString *)transitionName;
-(BOOL)matchesURLBagKey:(id)arg1 ;
@end

