/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <CoreBrightness/CoreBrightness-Structs.h>
#import <libobjc.A.dylib/NightShiftSupportProtocol.h>

@protocol CBContainerProtocol;
@class NSString;

@interface NightShiftDisplayWrapper : NSObject <NightShiftSupportProtocol> {

	DisplayRef _display;
	id<CBContainerProtocol> _container;

}

@property (retain) id<CBContainerProtocol> container;               //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyPreferenceForKey:(id)arg1 user:(id)arg2 ;
-(void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3 ;
-(id)init;
-(void)setContainer:(id<CBContainerProtocol>)arg1 ;
-(void)setNightShiftFactorDictionary:(id)arg1 ;
-(id)initWithDisplay:(DisplayRef)arg1 ;
-(id<CBContainerProtocol>)container;
-(void)dealloc;
@end

