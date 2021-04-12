/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(CGSize)size;
-(BOOL)matchesURL:(id)arg1 ;
-(long long)cornerRadius;
-(BOOL)shouldShowNavigationBar;
-(NSString *)transitionName;
-(BOOL)matchesURLBagKey:(id)arg1 ;
@end

