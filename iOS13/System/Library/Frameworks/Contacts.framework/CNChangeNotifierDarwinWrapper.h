/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/CNChangeNotifierWrapper.h>

@class NSString;

@interface CNChangeNotifierDarwinWrapper : NSObject <CNChangeNotifierWrapper>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)postNotification:(id)arg1 ;
-(void)addObserver:(id)arg1 notification:(id)arg2 ;
-(void)removeObserver:(id)arg1 notification:(id)arg2 ;
@end

