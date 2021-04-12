/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWScript.h>

@protocol SWSession;
@class NSString, WKUserScript;

@interface SWSessionScript : NSObject <SWScript> {

	id<SWSession> _session;

}

@property (nonatomic,readonly) id<SWSession> session;                    //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) WKUserScript * userScript; 
@property (nonatomic,readonly) NSString * executableScript; 
@property (nonatomic,readonly) BOOL queueable; 
-(id<SWSession>)session;
-(id)initWithSession:(id)arg1 ;
-(WKUserScript *)userScript;
-(BOOL)queuable;
@end

