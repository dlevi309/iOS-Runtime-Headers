/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNTimeProvider.h>

@protocol CNTimeProvider <NSObject>
@property (readonly) double timestamp; 
@required
-(double)timestamp;

@end


@class NSString;

@interface CNTimeProvider : NSObject <CNTimeProvider>

@property (readonly) double timestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProvider;
-(double)timestamp;
@end

