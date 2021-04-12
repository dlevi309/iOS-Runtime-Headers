/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSURL, NSString;

@interface WKBackForwardListItem : NSObject <WKObject> {

	ObjectStorage<WebKit::WebBackForwardListItem> _item;

}

@property (readonly) WebBackForwardListItem* _item; 
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * title; 
@property (copy,readonly) NSURL * initialURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(WebBackForwardListItem*)_item;
-(NSURL *)URL;
-(NSString *)title;
-(CGPoint)_scrollPosition;
-(Object*)_apiObject;
-(NSURL *)initialURL;
-(CGImageRef)_copySnapshotForTesting;
@end

