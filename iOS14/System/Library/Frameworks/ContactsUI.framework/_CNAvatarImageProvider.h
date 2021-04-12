/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNAvatarImageProvider.h>

@protocol CNUIPRLikenessProvider;
@class NSString;

@interface _CNAvatarImageProvider : NSObject <CNAvatarImageProvider> {

	id<CNUIPRLikenessProvider> _likenessProvider;

}

@property (nonatomic,readonly) id<CNUIPRLikenessProvider> likenessProvider;              //@synthesize likenessProvider=_likenessProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)roundImage:(id)arg1 ;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id<CNUIPRLikenessProvider>)likenessProvider;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 style:(unsigned long long)arg3 ;
-(id)initWithLikenessProvider:(id)arg1 ;
@end

