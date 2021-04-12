/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXAction.h>

@protocol SXBookmark;
@class NSString;

@interface SXBookmarkAction : NSObject <SXAction> {

	id<SXBookmark> _bookmark;

}

@property (nonatomic,readonly) id<SXBookmark> bookmark;              //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXBookmark>)bookmark;
-(id)initWithBookmark:(id)arg1 ;
-(NSString *)type;
@end

