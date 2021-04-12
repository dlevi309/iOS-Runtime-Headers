/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface _WKVisitedLinkStore : NSObject <WKObject> {

	ObjectStorage<WebKit::VisitedLinkStore> _visitedLinkStore;

}

@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addVisitedLinkWithURL:(id)arg1 ;
-(id)init;
-(BOOL)containsVisitedLinkWithURL:(id)arg1 ;
-(void)addVisitedLinkWithString:(id)arg1 ;
-(void)removeVisitedLinkWithURL:(id)arg1 ;
-(Object*)_apiObject;
-(void)removeAll;
-(void)dealloc;
@end

