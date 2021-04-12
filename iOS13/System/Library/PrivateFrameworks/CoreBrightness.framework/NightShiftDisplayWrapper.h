/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id<CBContainerProtocol>)container;
-(void)setContainer:(id<CBContainerProtocol>)arg1 ;
-(id)initWithDisplay:(DisplayRef)arg1 ;
-(void)setNightShiftFactorDictionary:(id)arg1 ;
-(id)copyPreferenceForKey:(id)arg1 user:(id)arg2 ;
-(void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3 ;
@end

