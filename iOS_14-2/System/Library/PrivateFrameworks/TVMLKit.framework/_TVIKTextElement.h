/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <ITMLKit/IKTextElement.h>

@class NSAttributedString;

@interface _TVIKTextElement : IKTextElement {

	NSAttributedString* _cachedAttributedString;

}

@property (nonatomic,copy) NSAttributedString * cachedAttributedString;              //@synthesize cachedAttributedString=_cachedAttributedString - In the implementation block
-(void)dealloc;
-(void)_stylesMarkedDirtyNotification:(id)arg1 ;
-(void)setCachedAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)cachedAttributedString;
@end

