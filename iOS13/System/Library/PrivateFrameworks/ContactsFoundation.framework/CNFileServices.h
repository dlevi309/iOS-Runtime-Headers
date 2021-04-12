/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/CNFileServices.h>

@protocol CNFileServices <NSObject>
@required
-(int)statfs:(const char*)arg1 :(statfs*)arg2;
-(int)errnoValue;
-(void*)dlopen:(const char*)arg1 :(int)arg2;
-(void*)dlsym:(void*)arg1 :(const char*)arg2;
-(int)dlclose:(void*)arg1;
-(int)open:(const char*)arg1 :(int)arg2 :(unsigned short)arg3;
-(int)close:(int)arg1;
-(int)fstatfs:(int)arg1 :(statfs*)arg2;
-(int)flock:(int)arg1 :(int)arg2;
-(int)fcntl_flock:(int)arg1 :(int)arg2 :(flock*)arg3;
-(id)NSTemporaryDirectory;

@end


@class NSString;

@interface CNFileServices : NSObject <CNFileServices>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(int)statfs:(const char*)arg1 :(statfs*)arg2 ;
-(int)errnoValue;
-(void*)dlopen:(const char*)arg1 :(int)arg2 ;
-(void*)dlsym:(void*)arg1 :(const char*)arg2 ;
-(int)dlclose:(void*)arg1 ;
-(int)open:(const char*)arg1 :(int)arg2 :(unsigned short)arg3 ;
-(int)close:(int)arg1 ;
-(int)fstatfs:(int)arg1 :(statfs*)arg2 ;
-(int)flock:(int)arg1 :(int)arg2 ;
-(int)fcntl_flock:(int)arg1 :(int)arg2 :(flock*)arg3 ;
-(id)NSTemporaryDirectory;
@end

