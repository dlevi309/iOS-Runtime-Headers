/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSString;

@interface _CFStreamDelegate : NSObject <NSStreamDelegate> {

	unsigned long long _flags;
	SCD_Struct_CF14* _client;
	SCD_Union_CF15* _cb;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStreamEvents:(unsigned long long)arg1 callback:(void*)arg2 context:(SCD_Struct_CF14*)arg3 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
@end

