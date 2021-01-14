/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/CNFileServices.h>

@protocol CNFileServices <NSObject>
@required
-(void*)dlsym:(void*)arg1 :(const char*)arg2;
-(int)open:(const char*)arg1 :(int)arg2 :(unsigned short)arg3;
-(int)flock:(int)arg1 :(int)arg2;
-(int)statfs:(const char*)arg1 :(statfs*)arg2;
-(void*)dlopen:(const char*)arg1 :(int)arg2;
-(int)dlclose:(void*)arg1;
-(int)fstatfs:(int)arg1 :(statfs*)arg2;
-(int)fcntl_flock:(int)arg1 :(int)arg2 :(flock*)arg3;
-(id)NSTemporaryDirectory;
-(int)close:(int)arg1;
-(int)errnoValue;

@end


@class NSString;

@interface CNFileServices : NSObject <CNFileServices>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void*)dlsym:(void*)arg1 :(const char*)arg2 ;
-(int)open:(const char*)arg1 :(int)arg2 :(unsigned short)arg3 ;
-(int)flock:(int)arg1 :(int)arg2 ;
-(int)statfs:(const char*)arg1 :(statfs*)arg2 ;
-(void*)dlopen:(const char*)arg1 :(int)arg2 ;
-(int)dlclose:(void*)arg1 ;
-(int)fstatfs:(int)arg1 :(statfs*)arg2 ;
-(int)fcntl_flock:(int)arg1 :(int)arg2 :(flock*)arg3 ;
-(id)NSTemporaryDirectory;
-(int)close:(int)arg1 ;
-(int)errnoValue;
@end

