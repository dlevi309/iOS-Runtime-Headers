/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IOKit.framework/Versions/A/IOKit
*/


#import <IOKit/IOKit-Structs.h>
@interface HIDDevice : NSObject {

	SCD_Struct_HI18* _device;

}

@property (readonly) unsigned service; 
-(void)open;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setDispatchQueue:(id)arg1 ;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(void)activate;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(void)cancel;
-(unsigned)service;
-(id)elementsMatching:(id)arg1 ;
-(void)setRemovalHandler:(/*^block*/id)arg1 ;
-(BOOL)commitElements:(id)arg1 direction:(long long)arg2 error:(out id*)arg3 ;
-(BOOL)conformsToUsagePage:(long long)arg1 usage:(long long)arg2 ;
-(void)setInputElementMatching:(id)arg1 ;
-(void)setInputElementHandler:(/*^block*/id)arg1 ;
-(void)setInputReportHandler:(/*^block*/id)arg1 ;
-(BOOL)setReport:(const void*)arg1 reportLength:(long long)arg2 withIdentifier:(long long)arg3 forType:(long long)arg4 error:(out id*)arg5 ;
-(BOOL)getReport:(void*)arg1 reportLength:(long long*)arg2 withIdentifier:(long long)arg3 forType:(long long)arg4 error:(out id*)arg5 ;
-(void)setBatchInputElementHandler:(/*^block*/id)arg1 ;
-(BOOL)openSeize:(out id*)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)description;
-(void)dealloc;
@end

