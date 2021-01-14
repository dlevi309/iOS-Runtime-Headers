/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
*/

#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface STKSessionBehavior : NSObject <BSXPCCoding> {

	double _timeout;
	BOOL _shouldSendResponseUponDisplay;
	BOOL _dismissesAfterUserEvent;

}

@property (nonatomic,readonly) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) BOOL shouldSendResponseUponDisplay;              //@synthesize shouldSendResponseUponDisplay=_shouldSendResponseUponDisplay - In the implementation block
@property (nonatomic,readonly) BOOL dismissesAfterUserEvent;                    //@synthesize dismissesAfterUserEvent=_dismissesAfterUserEvent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timeout;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)dismissesAfterUserEvent;
-(BOOL)shouldSendResponseUponDisplay;
@end

