/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libBasebandManager.dylib
*/

#import <libBasebandManager.dylib/libBasebandManager.dylib-Structs.h>
#import <libobjc.A.dylib/CMCallHandednessDelegate.h>

@class NSString;

@interface CMHandDetectionDelegate : NSObject <CMCallHandednessDelegate> {

	block<void ()(CMCallHandedness)>* fCallBack;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)callHandednessManager:(id)arg1 didUpdateState:(long long)arg2 ;
-(void)registerHandler:(block<void ()(CMCallHandedness)>*)arg1 ;
@end

