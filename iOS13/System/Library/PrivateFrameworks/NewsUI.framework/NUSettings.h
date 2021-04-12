/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUSettings.h>

@protocol NUSettings <NSObject>
@property (nonatomic,readonly) BOOL shouldShowArticlesInExcerptMode; 
@required
-(BOOL)shouldShowArticlesInExcerptMode;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NUSettings : NSObject <NUSettings, NSCopying>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldShowArticlesInExcerptMode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldShowArticlesInExcerptMode;
@end

