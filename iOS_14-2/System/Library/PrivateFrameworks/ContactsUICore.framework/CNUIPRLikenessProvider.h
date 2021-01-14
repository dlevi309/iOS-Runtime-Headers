/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PRLikeness *)likeness;
-(unsigned long long)_cnui_likenessType;
-(id)initWithPRLikeness:(id)arg1 ;
-(id)_cnui_likeness;
@end

