/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

#import <libobjc.A.dylib/SWScript.h>

@class WKUserScript, NSString;

@interface SWPresentationStateScript : NSObject <SWScript> {

	WKUserScript* userScript;
	unsigned long long _presentationState;

}

@property (nonatomic,readonly) unsigned long long presentationState;              //@synthesize presentationState=_presentationState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) WKUserScript * userScript; 
@property (nonatomic,readonly) NSString * executableScript; 
@property (nonatomic,readonly) BOOL queueable; 
-(NSString *)identifier;
-(unsigned long long)presentationState;
-(WKUserScript *)userScript;
-(id)initWithPresentationState:(unsigned long long)arg1 ;
-(NSString *)executableScript;
-(BOOL)queueable;
@end

