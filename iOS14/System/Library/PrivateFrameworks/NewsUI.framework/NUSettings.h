/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUSettings.h>

@protocol NUSettings <NSObject>
@property (readonly,nonatomic) BOOL shouldShowArticlesInExcerptMode; 
@required
-(BOOL)shouldShowArticlesInExcerptMode;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NUSettings : NSObject <NUSettings, NSCopying>

@property (nonatomic,readonly) BOOL shouldShowArticlesInExcerptMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldShowArticlesInExcerptMode;
@end

