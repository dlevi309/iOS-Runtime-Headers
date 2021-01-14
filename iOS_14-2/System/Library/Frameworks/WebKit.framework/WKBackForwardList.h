/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKBackForwardListItem, NSArray, NSString;

@interface WKBackForwardList : NSObject <WKObject> {

	ObjectStorage<WebKit::WebBackForwardList> _list;

}

@property (nonatomic,readonly) WKBackForwardListItem * currentItem; 
@property (nonatomic,readonly) WKBackForwardListItem * backItem; 
@property (nonatomic,readonly) WKBackForwardListItem * forwardItem; 
@property (nonatomic,copy,readonly) NSArray * backList; 
@property (nonatomic,copy,readonly) NSArray * forwardList; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_clear;
-(id)itemAtIndex:(long long)arg1 ;
-(void)_removeAllItems;
-(NSArray *)backList;
-(WKBackForwardListItem *)forwardItem;
-(NSArray *)forwardList;
-(WKBackForwardListItem *)currentItem;
-(Object*)_apiObject;
-(void)dealloc;
-(WKBackForwardListItem *)backItem;
@end

