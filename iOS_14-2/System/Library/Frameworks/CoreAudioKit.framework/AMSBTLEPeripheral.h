/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
*/


@class CBPeripheral, NSString, CBCentralManager;

@interface AMSBTLEPeripheral : NSObject {

	CBPeripheral* peripheral;
	NSString* uuid;
	NSString* name;
	CBCentralManager* centralManager;
	double lastSeen;
	BOOL inputAvailable;
	BOOL outputAvailable;
	BOOL online;
	BOOL available;
	BOOL changingState;

}

@property (readonly) CBPeripheral * peripheral; 
@property (retain,readonly) NSString * uuid; 
@property (retain) NSString * name; 
@property (assign) double lastSeen; 
@property (assign) BOOL inputAvailable; 
@property (assign) BOOL outputAvailable; 
@property (getter=isOnline) BOOL online; 
@property (getter=isChangingState) BOOL changingState; 
@property (getter=isAvailable) BOOL available; 
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)disconnect;
-(BOOL)isAvailable;
-(NSString *)uuid;
-(BOOL)hidden;
-(double)lastSeen;
-(void)setOnline:(BOOL)arg1 ;
-(BOOL)connect;
-(NSString *)name;
-(BOOL)canConnect;
-(CBPeripheral *)peripheral;
-(void)setLastSeen:(double)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isOnline;
-(void)dealloc;
-(BOOL)outputAvailable;
-(void)setChangingState:(BOOL)arg1 ;
-(BOOL)isChangingState;
-(BOOL)inputAvailable;
-(id)initWithID:(id)arg1 name:(id)arg2 manager:(id)arg3 ;
-(void)setInputAvailable:(BOOL)arg1 ;
-(void)setOutputAvailable:(BOOL)arg1 ;
-(BOOL)updateAvailableStateChanged;
@end

