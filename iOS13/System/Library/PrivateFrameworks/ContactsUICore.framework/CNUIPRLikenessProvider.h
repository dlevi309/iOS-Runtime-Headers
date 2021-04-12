/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIPRLikenessProvider.h>

@class PRLikeness, NSString;

@interface CNUIPRLikenessProvider : NSObject <CNUIPRLikenessProvider> {

	PRLikeness* _likeness;

}

@property (nonatomic,readonly) PRLikeness * likeness;               //@synthesize likeness=_likeness - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_cnui_likeness;
-(id)initWithPRLikeness:(id)arg1 ;
-(unsigned long long)_cnui_likenessType;
-(PRLikeness *)likeness;
@end

