/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKConnection : NSObject <WKObject> {

	WeakObjCPtr<id<WKConnectionDelegate> > _delegate;

}

@property (assign) id<WKConnectionDelegate> delegate; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendMessageWithName:(id)arg1 body:(id)arg2 ;
-(id<WKConnectionDelegate>)delegate;
-(void)setDelegate:(id<WKConnectionDelegate>)arg1 ;
-(Object*)_apiObject;
-(WebConnection*)_connection;
-(void)dealloc;
@end

