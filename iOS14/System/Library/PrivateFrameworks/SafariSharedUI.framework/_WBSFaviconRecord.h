/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


#import <SafariSharedUI/SafariSharedUI-Structs.h>
@class NSURL, NSData;

@interface _WBSFaviconRecord : NSObject {

	BOOL _isPrivate;
	NSURL* _pageURL;
	NSURL* _originalPageURL;
	NSURL* _iconURL;
	NSData* _iconData;
	CGSize _size;

}

@property (nonatomic,readonly) NSURL * pageURL;                      //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,readonly) NSURL * originalPageURL;              //@synthesize originalPageURL=_originalPageURL - In the implementation block
@property (nonatomic,readonly) NSURL * iconURL;                      //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,copy,readonly) NSData * iconData;               //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,readonly) CGSize size;                          //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL isPrivate;                       //@synthesize isPrivate=_isPrivate - In the implementation block
+(id)new;
-(id)init;
-(NSData *)iconData;
-(NSURL *)pageURL;
-(CGSize)size;
-(BOOL)isPrivate;
-(NSURL *)iconURL;
-(id)initWithPageURL:(id)arg1 originalPageURL:(id)arg2 iconURL:(id)arg3 iconData:(id)arg4 size:(CGSize)arg5 isPrivate:(BOOL)arg6 ;
-(NSURL *)originalPageURL;
@end

