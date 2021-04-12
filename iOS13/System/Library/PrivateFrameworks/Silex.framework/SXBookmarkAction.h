/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXAction.h>

@protocol SXBookmark;
@class NSString;

@interface SXBookmarkAction : NSObject <SXAction> {

	id<SXBookmark> _bookmark;

}

@property (nonatomic,readonly) id<SXBookmark> bookmark;              //@synthesize bookmark=_bookmark - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * type; 
-(NSString *)type;
-(id<SXBookmark>)bookmark;
-(id)initWithBookmark:(id)arg1 ;
@end

